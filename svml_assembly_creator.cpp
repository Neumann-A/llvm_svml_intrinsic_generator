///-------------------------------------------------------------------------------------------------
// file:	svml_assembly_creator.cpp
//
// summary:	
///-------------------------------------------------------------------------------------------------
#include "svml_assembly_creator.h"

#include <iostream>
#include <string>
#include <iterator>
#include <boost/range/adaptor/reversed.hpp>
#include <optional>

namespace svml
{
	// Register to clobber in vdecl calling convention
	// "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm0", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
	constexpr ::std::array<::std::string_view, 13> clobber_register = 	{
		"%ymm0", "%ymm1", "%ymm2", "%ymm3",	"%ymm4", "%ymm5",
		"%rax",	"%rcx",	"%rdx",	"%r8", "%r9", "%r10", "%r11" };  // callee saved registers
	   
	void write_svml_intrinsics(const svml_mapping_info& info, const fs::path& avxpath, const fs::path& avx512path)
	{
		const std::string indent = "    ";
		for (const auto& elem : info.svml)
		{
			if (std::any_of(elem.mminfo.ParamList.cbegin(), elem.mminfo.ParamList.cend(),
				[](const auto& elem) {return is_mask_type(elem); }))
			{
				::std::cerr << "Masked function: " << elem.strinfo.mmfuncname<<" cannot be handled yet!\n";
				continue;
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
				mm_intrinsic_impl += " __DEFAULT_FN_ATTRS128\n";
				break;
			case intrin_type_info::m256:
			case intrin_type_info::m256d:
			case intrin_type_info::m256i:
				mm_intrinsic_impl += " __DEFAULT_FN_ATTRS256\n";
				break;
			case intrin_type_info::m512:
			case intrin_type_info::m512d:
			case intrin_type_info::m512i:
				mm_intrinsic_impl += " __DEFAULT_FN_ATTRS512\n";
				break;
			default:
				throw std::runtime_error{ "unknown return type!" };
				break;
			}
			
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
			mm_intrinsic_impl.erase(mm_intrinsic_impl.end() - 2); // Remove trailing ", "

			mm_intrinsic_impl += ") { \n";

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

			reg_infos.emplace_back(reg_info{ elem.mminfo.ReturnType, std::nullopt, 0,std::nullopt,std::nullopt });

			std::int16_t current_input_ymm_reg = 0;
			std::int16_t current_output_ymm_reg = 0; // there is always at least 1 output so x/y/zmm0 will always be used; 
			//Analyze parameters
			for (const auto& param : params)
			{	
				if (is_pointer_type(param.type)) // that are returned values; always come first in the param list!
				{
					current_output_ymm_reg = (std::int16_t)reg_infos.size();
					reg_infos.emplace_back(reg_info{ std::nullopt, param.type , current_output_ymm_reg, std::nullopt,param.name});
				}
				else if (is_mask_type(param.type))
				{
					//TODO: Handle mask types here correctly problem is i don't know how to correctly apply the mask on the inputs without using a hand written template assembly
					//      Would be better if the Input/Output constrains would automatically apply the mask to them.  
				}
				else
				{
					if(current_input_ymm_reg < reg_infos.size())
					{
						auto reg_info = reg_infos.at(current_input_ymm_reg);
						reg_info.intype = param.type;
						reg_info.input_name = param.name;
					}
					else
					{
						reg_infos.emplace_back(reg_info{ param.type, std::nullopt, current_output_ymm_reg, param.name,std::nullopt });
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
					mm_intrinsic_impl.erase(mm_intrinsic_impl.end() - 2);
				}
				mm_intrinsic_impl += " ";

				mm_intrinsic_impl += build_regname(reg_info.reg_number);
				mm_intrinsic_impl += " asm(\"";
				mm_intrinsic_impl += std::string{ to_string(intrin_regprefix, type) } +"mm" + std::to_string(reg_info.reg_number);
				mm_intrinsic_impl += "\") ";

				if (reg_info.intype && reg_info.input_name)
				{
					mm_intrinsic_impl += " = ";
					mm_intrinsic_impl += *reg_info.input_name;
				}
				mm_intrinsic_impl += ";\n";


			}


			// define required assembly
			mm_intrinsic_impl += indent;
			mm_intrinsic_impl += "asm( \n";
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += " \"call "+elem.svml_to_vdecl_name+" \\t\\n\" \n"; //add code
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": \n"; //Add Outputs
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": \n"; //add Inputs
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ": \n"; //add clobbers
			mm_intrinsic_impl += indent; mm_intrinsic_impl += indent;
			mm_intrinsic_impl += ")\n";
			// return values
			for (const auto& reg_info : boost::adaptors::reverse(reg_infos))
			{
				
			}


			mm_intrinsic_impl += "}";
			
			std::cout << mm_intrinsic_impl << '\n';
			std::cout << '\n';

		}
	}

}