///-------------------------------------------------------------------------------------------------
// file:	svml_assembly_creator.cpp
//
// summary:	
///-------------------------------------------------------------------------------------------------
#include "svml_assembly_creator.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <boost/range/adaptor/reversed.hpp>
#include <optional>

namespace svml
{
	const std::string indent = "    ";
	// Register to clobber in vdecl calling convention
	// "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm0", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
	constexpr ::std::array<::std::string_view, 13> clobber_register_x = 	{
		"%xmm0", "%xmm1", "%xmm2", "%xmm3",	"%xmm4", "%xmm5",
		"%rax",	"%rcx",	"%rdx",	"%r8", "%r9", "%r10", "%r11" };  // callee saved registers
	constexpr ::std::array<::std::string_view, 13> clobber_register_y = {
		"%ymm0", "%ymm1", "%ymm2", "%ymm3",	"%ymm4", "%ymm5",
		"%rax",	"%rcx",	"%rdx",	"%r8", "%r9", "%r10", "%r11" };  // callee saved registers
	constexpr ::std::array<::std::string_view, 13> clobber_register_u = {
		"%zmm0", "%zmm1", "%zmm2", "%zmm3",	"%zmm4", "%zmm5",
		"%rax",	"%rcx",	"%rdx",	"%r8", "%r9", "%r10", "%r11" };  // callee saved registers

	void write_svml_intrinsics(const svml_mapping_info& info, const fs::path& avxpath, const fs::path& avx512path)
	{
		std::ofstream outstream;
		outstream.open(avx512path, std::ios::out | std::ios::app);
		outstream << "#include \"../svml_prolog.h\"\n\n";
		outstream.close();
		outstream.open(avxpath, std::ios::out | std::ios::app);
		outstream << "#include \"../svml_prolog.h\"\n\n";
		outstream.close();		

		for (const auto& elem : info.svml)
		{
			struct mask_info
			{
				std::int16_t position{ -1 };
				intrin_type_info type;
				std::string paramstr;
			};
			mask_info mask;

			bool isMasked = false;
			if (std::any_of(elem.mminfo.ParamList.cbegin(), elem.mminfo.ParamList.cend(),
				[](const auto& elem) {return is_mask_type(elem); }))
			{
				isMasked = true;
				auto it = std::find_if(elem.mminfo.ParamList.cbegin(), elem.mminfo.ParamList.cend(),
					[](const auto& elem) {return is_mask_type(elem); });
				mask.position = it - elem.mminfo.ParamList.cbegin();
			}
			if (!elem.mapping_valid)
			{
				::std::cerr << "No valid mapping for: " << elem.strinfo.mmfuncname << "\n";
				continue;
			}

			std::string mm_intrinsic_impl = "__SVML_INTRIN_PROLOG ";
			mm_intrinsic_impl += to_string(intrin_param_map_info, elem.mminfo.ReturnType);
			
			std::vector<std::string> paramnames;

			switch (elem.mminfo.ReturnType)
			{
			case intrin_type_info::m128:
			case intrin_type_info::m128d:
			case intrin_type_info::m128i:
				mm_intrinsic_impl += " __DEFAULT_SVML_FN_ATTRS128\n";
				break;
			case intrin_type_info::m256:
			case intrin_type_info::m256d:
			case intrin_type_info::m256i:
				mm_intrinsic_impl += " __DEFAULT_SVML_FN_ATTRS256\n";
				break;
			case intrin_type_info::m512:
			case intrin_type_info::m512d:
			case intrin_type_info::m512i:
				mm_intrinsic_impl += " __DEFAULT_SVML_FN_ATTRS512\n";
				break;
			default:
				throw std::runtime_error{ "unknown return type!" };
				break;
			}
			mm_intrinsic_impl += indent;
			mm_intrinsic_impl += elem.strinfo.mmfuncname;
			mm_intrinsic_impl += "(";

			struct param_info
			{
				std::string name;
				intrin_type_info type;
			};
			
			std::vector<param_info> params;
			for (const auto& param : elem.mminfo.ParamList)
			{
				mm_intrinsic_impl += to_string(intrin_param_map_info, param);
				mm_intrinsic_impl += " ";
				const std::string param_name= "param" + std::to_string(params.size());
				mm_intrinsic_impl += param_name;
				params.push_back({ std::move(param_name),param });
				mm_intrinsic_impl += ", ";
			}
			mm_intrinsic_impl.erase(mm_intrinsic_impl.end() - 2, mm_intrinsic_impl.end()); // Remove trailing ", "

			mm_intrinsic_impl += ") \n{ \n";

			// define used registers
			const auto param_count = params.size();

			const auto return_count = elem.mminfo.NumberOfOutParams;
			const auto in_count = param_count - return_count - 1;
			
			const std::string_view default_reg_prefix{ "reg" };
			auto build_regname = [&](std::int16_t no) { return std::string{ default_reg_prefix }+std::to_string(no); };

			struct reg_info
			{
				std::optional<intrin_type_info> intype;
				std::optional<intrin_type_info> outtype;
				std::int16_t reg_number;
				std::optional<std::string> input_name;
				std::optional<std::string> output_name;
			};
			

			std::vector<reg_info> reg_infos;

			reg_infos.emplace_back(reg_info{ std::nullopt , elem.mminfo.ReturnType, 0,std::nullopt,std::nullopt });

			std::int16_t current_input_ymm_reg = 0;
			std::int16_t current_output_ymm_reg = 0; // there is always at least 1 output so x/y/zmm0 will always be used; 
			//Analyze parameters
			bool after_mask{ !isMasked };

			for (const auto& param : params)
			{	
				if (is_pointer_type(param.type)) // that are returned values; always come first in the param list! Pointers are always before the mask
				{
					reg_infos.emplace_back(reg_info{ std::nullopt, param.type , (std::int16_t)reg_infos.size(), std::nullopt,param.name });
				}
				else if (is_mask_type(param.type))
				{
					after_mask = true;
					mask.paramstr = param.name;
					mask.type = param.type;
				}
				else
				{
					if (!after_mask) // We only need input parameters for registers after the mask value;
						continue;
					if(current_input_ymm_reg < reg_infos.size() )
					{
						auto& reg_info = reg_infos.at(current_input_ymm_reg);
						reg_info.intype = param.type;
						reg_info.input_name = param.name;
					}
					else
					{
						reg_infos.emplace_back(reg_info{ param.type, std::nullopt, (std::int16_t)reg_infos.size(), param.name,std::nullopt });
					}
					++current_input_ymm_reg;
				}
			}


			//Create Register info;
			for (const auto& reg_info : reg_infos)
			{
				mm_intrinsic_impl += indent;
				mm_intrinsic_impl += "register ";			

				intrin_type_info type;

				if (reg_info.intype)
					type = *reg_info.intype;
				else
					type = *reg_info.outtype;

				mm_intrinsic_impl += to_string(intrin_param_map_info, type);
				if (is_pointer_type(type))
				{
					mm_intrinsic_impl.erase(mm_intrinsic_impl.end() - 2, mm_intrinsic_impl.end());
				}
				mm_intrinsic_impl += " ";

				mm_intrinsic_impl += build_regname(reg_info.reg_number);
				mm_intrinsic_impl += " asm(\"";
				mm_intrinsic_impl += std::string{ to_string(intrin_regprefix, type) } +"mm" + std::to_string(reg_info.reg_number);
				mm_intrinsic_impl += "\")";

				if (reg_info.intype && reg_info.input_name)
				{					
					if (isMasked)  //Masked read in
					{
						mm_intrinsic_impl += ";\n";
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += to_string(intrin_param_map_info, type);
						mm_intrinsic_impl += "_maskz_load_";
						mm_intrinsic_impl += to_string(packed_type_name_map_info, elem.mminfo.Suffix);
						mm_intrinsic_impl += "(&";
						mm_intrinsic_impl += build_regname(reg_info.reg_number);
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += mask.paramstr;
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += *reg_info.input_name;
						mm_intrinsic_impl += ")";
					}
					else // Normal Input
					{
						mm_intrinsic_impl += " = ";
						mm_intrinsic_impl += *reg_info.input_name;
					}
				}
				mm_intrinsic_impl += ";\n";
			}

			// define required assembly
			mm_intrinsic_impl += indent;
			//mm_intrinsic_impl += "asm( \"sub $48, %%rsp \\t\\n\"\n";
			mm_intrinsic_impl += "asm( \n";
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += " \"call "+elem.svml_to_vdecl_name+" \\t\\n\" \n"; //add code
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			//mm_intrinsic_impl += " \"add $48, %%rsp \\t\\n\"\n";
			//mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": "; 

			//Add Outputs
			for (const auto& reg_info : reg_infos)
			{
				if (reg_info.outtype)
				{
					mm_intrinsic_impl += "\"=v\" ";
					mm_intrinsic_impl += "(";
					mm_intrinsic_impl += build_regname(reg_info.reg_number);
					//if (reg_info.output_name)
					//	mm_intrinsic_impl += *reg_info.output_name;
					//else
					//	mm_intrinsic_impl += *reg_info.input_name;
					mm_intrinsic_impl += "), ";
				}
			}
			mm_intrinsic_impl.erase(mm_intrinsic_impl.size() - 2);

			mm_intrinsic_impl += "\n";
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": "; 
			//add Inputs
			for (const auto& reg_info : reg_infos)
			{
				if (reg_info.intype)
				{
					mm_intrinsic_impl += "\"";
					if (reg_info.outtype)
						mm_intrinsic_impl += std::to_string(reg_info.reg_number);
					else
						mm_intrinsic_impl += "v";
					mm_intrinsic_impl += "\" ";
					mm_intrinsic_impl += "(";
					mm_intrinsic_impl += build_regname(reg_info.reg_number);
					mm_intrinsic_impl += "), ";
				}
			}
			mm_intrinsic_impl.erase(mm_intrinsic_impl.size() - 2);
			mm_intrinsic_impl += "\n";
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": ";
			// add clobbers
			for (auto elemit = clobber_register_y.begin() + reg_infos.size(); elemit < clobber_register_y.end(); elemit++)
			{
				mm_intrinsic_impl += "\"";
				mm_intrinsic_impl += *elemit;
				mm_intrinsic_impl += "\"";
				mm_intrinsic_impl += ", ";
			}
			mm_intrinsic_impl.erase(mm_intrinsic_impl.size() - 2);

			mm_intrinsic_impl += "\n";
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ");\n";
			
			// return values
			int return_counter = 0;
			for (const auto& reg_info : boost::adaptors::reverse(reg_infos))
			{

				if (reg_info.outtype && reg_info.output_name)
				{
					if (!isMasked) //Simple assignment;
					{
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += "*";
						mm_intrinsic_impl += *reg_info.output_name;
						mm_intrinsic_impl += " = ";
						mm_intrinsic_impl += build_regname(reg_info.reg_number);
						mm_intrinsic_impl += ";\n";
					}
					else // Complex masked stores
					{
						//First write default value:
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += "*";
						mm_intrinsic_impl += *reg_info.output_name;
						mm_intrinsic_impl += " = ";
						mm_intrinsic_impl += params[mask.position - return_counter - 1].name;
						mm_intrinsic_impl += ";\n";
						//Second write masked result;
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += to_string(intrin_param_map_info, *reg_info.outtype);
						mm_intrinsic_impl += "_mask_store_";
						mm_intrinsic_impl += to_string(packed_type_name_map_info, elem.mminfo.Suffix);
						mm_intrinsic_impl += "(";
						mm_intrinsic_impl += *reg_info.output_name;
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += mask.paramstr;
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += build_regname(reg_info.reg_number);
						mm_intrinsic_impl += ");\n";
					}
					return_counter++;
				}
				else if (reg_info.outtype)
				{
					assert(reg_info.reg_number == 0);
					if (!isMasked)
					{
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += "return ";
						if (*reg_info.outtype != *reg_info.intype)
						{
							mm_intrinsic_impl += "(";
							mm_intrinsic_impl += to_string(intrin_param_map_info, *reg_info.outtype);
							mm_intrinsic_impl += ")";
						}
						mm_intrinsic_impl += build_regname(0);
						mm_intrinsic_impl += ";\n";
					}
					else
					{
						std::string tmpvar{ params[mask.position + 1].name };
						//First write default value:
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += " ";
						mm_intrinsic_impl += tmpvar;
						mm_intrinsic_impl += " = ";
						mm_intrinsic_impl += params[mask.position - return_counter - 1 ].name;
						mm_intrinsic_impl += ";\n";
						//Second write masked result;
						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += to_string(intrin_param_map_info, *reg_info.outtype);
						mm_intrinsic_impl += "_mask_store_";
						mm_intrinsic_impl += to_string(packed_type_name_map_info, elem.mminfo.Suffix);
						mm_intrinsic_impl += "(&";
						mm_intrinsic_impl += tmpvar;
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += mask.paramstr;
						mm_intrinsic_impl += ",";
						mm_intrinsic_impl += build_regname(0);
						mm_intrinsic_impl += ");\n";

						mm_intrinsic_impl += indent;
						mm_intrinsic_impl += "return ";
						if (*reg_info.outtype != *reg_info.intype)
						{
							mm_intrinsic_impl += "(";
							mm_intrinsic_impl += to_string(intrin_param_map_info, *reg_info.outtype);
							mm_intrinsic_impl += ")";
						}
						mm_intrinsic_impl += tmpvar;
						mm_intrinsic_impl += ";\n";
					}
				}
			}
			
			mm_intrinsic_impl += "}";
			
			std::ofstream outstream;
			switch (elem.mminfo.ReturnType)
			{
			case intrin_type_info::m512:
			case intrin_type_info::m512d:
			case intrin_type_info::m512i:
				outstream.open(avx512path, std::ios::out | std::ios::app) ;
				break;
			default:
				outstream.open( avxpath , std::ios::out | std::ios::app);
			}
			outstream << mm_intrinsic_impl << "\n\n";
			outstream << std::endl;
			outstream.close();
			//std::cout << mm_intrinsic_impl << '\n';
			//std::cout << '\n';

		}
	}

}