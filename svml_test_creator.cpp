///-------------------------------------------------------------------------------------------------
// file:	svml_test_creator.cpp
//
// summary:	Implements the svml test creator class
///-------------------------------------------------------------------------------------------------

#include "svml_test_creator.h"

#include <string>
#include <iostream>
#include <fstream>
namespace svml
{

	struct test_param_info
	{
		std::string param_type;
		std::string param_name;
		intrin_type_info intrin_type;
		bool is_Output{ false };
	};

	struct intrinsic_param_info
	{
		std::string intrin_param_name;
		const test_param_info& linked_test_info;
	};



	auto build_packed_type = [](int PackedElements, packed_type_info ptype) {
		std::string res{ "Vector" };
		res += std::to_string(PackedElements);
		res += to_string(packed_type_name_map_info, ptype);
		return res;
	};

	const std::string indent = "    ";
	std::string  write_test_helper_function(const svml_definition_info& info)
	{
		std::vector<test_param_info> params;
		test_param_info return_info;
		std::vector<intrinsic_param_info> m_params;
		std::string res;
		
		//Function declration
		res += "__declspec(noinline) void helper_";
		res += info.strinfo.mmfuncname;
		res += "(";
		
		auto packed_elements = is_complex_func(info.mminfo.MathFunction) ? info.mminfo.PackedElements*2 : info.mminfo.PackedElements;
		res += build_packed_type(packed_elements, info.mminfo.Suffix);

		res += " &ret";
		
		return_info = test_param_info{ build_packed_type(packed_elements, info.mminfo.Suffix), "ret", info.mminfo.ReturnType };

		res += ", ";
		for (auto& param : info.mminfo.ParamList)
		{
			std::string param_name{"param_"};
			std::string param_type;
			param_name += std::to_string(params.size());
			if (is_mask_type(param)) //Mask
			{
				param_type = "std::int";
				param_type += std::to_string(packed_elements);
				param_type += "_t ";
				res += "const ";
				res += param_type;
				res += " &";
			}
			else if(is_pointer_type(param)) //Second Output
			{
				param_type = build_packed_type(packed_elements, info.mminfo.Suffix);
				res += param_type;
				res += " &";
			}
			else //Input
			{
				res +="const ";
				param_type = build_packed_type(packed_elements, info.mminfo.Suffix);
				res += param_type;
				res += " &";
			}
			res += param_name;
			res += ", ";
			params.push_back({ param_type , param_name , param });
		}
		res.erase(res.end() - 2, res.end()); // delete extra ", "
		res += ")\n";

		//Function implementation
		res += "{\n";
		
		//Function prologue
		std::string func_prefix(to_string(intrin_func_prefix_info, info.mminfo.Prefix));

		for(auto &param : params)
		{
			res += indent;
			std::string m_name ="impl_param_";
			m_name += std::to_string(m_params.size());
			res += to_string(intrin_param_map_info, param.intrin_type);
			res += " ";

			if (is_mask_type(param.intrin_type)) // Mask value
			{
				res += m_name;
				res += " = ";
				//res += " = _load_mask";
				//res += std::to_string(info.mminfo.PackedElements);
				res += "(";
				res += "(";
				res += to_string(intrin_param_map_info, param.intrin_type);
				res += ")(";
				res += param.param_name;
				res += "))";		
			}
			else if (is_pointer_type(param.intrin_type)) // Output type
			{
				res.erase(res.end() - 2, res.end());
				res += m_name;
			}
			else // Inputs
			{
				res += m_name;
				if (info.mminfo.isIntegerFunction)
				{
					res += " = _";
					res += func_prefix;
					res += "_load_si";
					std::string tmp{ to_string(intrin_param_map_info, info.mminfo.ReturnType) };
					tmp.erase(tmp.begin(), tmp.begin() + 3);
					tmp.erase(tmp.end() - 1);
					res += tmp;
					res += "((";
					res += to_string(intrin_param_map_info, param.intrin_type);
					res += "*)";
					res += param.param_name;
					res += ".data()";
					res += ")";
				}
				else
				{
					res += " = _";
					res += func_prefix;
					res += "_load_";
					res += to_string(packed_type_name_map_info, info.mminfo.Suffix);
					res += "(";
					res += param.param_name;
					res += ".data()";
					res += ")";
				}


			}
			res += ";\n";
			m_params.push_back(intrinsic_param_info{ m_name, param });
		}


		res += "\n";
		//Intrinsic call
		res += indent;
		res += to_string(intrin_param_map_info, return_info.intrin_type);
		res += " m_ret";
		res += " = ";
		res += info.strinfo.mmfuncname;
		res += "(";
		for (auto& param : m_params)
		{
			if (is_pointer_type(param.linked_test_info.intrin_type))
				res += "&";
			res += param.intrin_param_name;
			res += ", ";
		}
		res.erase(res.end() - 2, res.end());
		res += ");\n";
		res += "\n";
		//Function epilogue
		res += indent;

		if (!info.mminfo.isIntegerFunction)
		{
			res += "_";
			res += func_prefix;
			res += "_store_";
			res += to_string(packed_type_name_map_info, info.mminfo.Suffix);
			res += "(";
			res += "ret.data(), ";
			res += "m_ret";
			res += ");\n";
		}
		else
		{
			//res += "*ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;\n";
			res += "_";
			res += func_prefix;
			res += "_store_si";
			std::string tmp{ to_string(intrin_param_map_info, info.mminfo.ReturnType) };
			tmp.erase(tmp.begin(), tmp.begin() + 3);
			tmp.erase(tmp.end() - 1);
			res += tmp;
			res += "((";
			res += to_string(intrin_param_map_info, info.mminfo.ReturnType);
			res += "*)";
			res += "ret";
			res += ".data()";
			res += ", m_ret);\n";
		}

		for (auto& param : m_params)
		{
			if (is_pointer_type(param.linked_test_info.intrin_type))
			{
				res += indent;
				if (!info.mminfo.isIntegerFunction)
				{
					res += "_";
					res += func_prefix;
					res += "_store_";
					res += to_string(packed_type_name_map_info, info.mminfo.Suffix);
					res += "(";
					res += param.linked_test_info.param_name;
					res += ".data(), ";
					res += param.intrin_param_name;
					res += ");\n";
				}
				else
				{
					res += "_";
					res += func_prefix;
					res += "_store_si";
					std::string tmp{ to_string(intrin_param_map_info,  info.mminfo.ReturnType) };
					tmp.erase(tmp.begin(), tmp.begin() + 3);
					tmp.erase(tmp.end() - 1);
					res += tmp;
					res += "((";
					res += to_string(intrin_param_map_info, info.mminfo.ReturnType);
					res += "*)";
					res += param.linked_test_info.param_name;
					res += ".data(), ";
					res += param.intrin_param_name;
					res += ");\n";
					//res += "*";
					//res += param.linked_test_info.param_name;
					//res += ".data() = *(std::decay_t<decltype(";
					//res += param.linked_test_info.param_name;
					//res += ")>::value_type*)&";
					//res += param.intrin_param_name;
					//res += ";\n";
				}
			}
		}

		res += "\n";
		res += "}\n\n";

		return res;
	}
	std::string  write_test(const svml_definition_info& info)
	{
		std::string res;
		std::vector<test_param_info> params;
		auto packed_elements = is_complex_func(info.mminfo.MathFunction) ? info.mminfo.PackedElements * 2 : info.mminfo.PackedElements;
		params.push_back(test_param_info{ build_packed_type(packed_elements, info.mminfo.Suffix), "Result", info.mminfo.ReturnType , true});
		for (auto& param : info.mminfo.ParamList)
		{
			bool is_Output = false;
			std::string param_name{ "param_" };
			std::string param_type;
			param_name += std::to_string(params.size());
			
			if (is_mask_type(param)) //Mask
			{
				param_type = "std::int";
				param_type += std::to_string(packed_elements);
				param_type += "_t ";
			}
			else if (is_pointer_type(param)) //Second Output
			{
				param_type = build_packed_type(packed_elements, info.mminfo.Suffix);
				is_Output = true;
			}
			else //Input
			{
				param_type = build_packed_type(packed_elements, info.mminfo.Suffix);
			}
			params.push_back({ param_type , param_name , param ,is_Output });
		}

		res += "TEST(SVML_intrinsics";
		res += info.strinfo.retval;
		res += ", test";
		res += info.strinfo.mmfuncname;
		res += ") {\n";

		std::string maskname;
		//Initial Inputs
		for (auto& param : params)
		{
			res += indent;
			res += param.param_type;
			res += " ";
			res += param.param_name;
			
			//Init Inputs
			if (!param.is_Output)
			{
				res += ";\n";
				res += indent;
				auto elements = info.mminfo.PackedElements;
				if (is_mask_type(param.intrin_type))
				{
					maskname = param.param_name;
					res += param.param_name;
					res += " = ";
					res += "(std::int";
					res += std::to_string(elements);
					res += "_t) mt64()";
				}
				else
				{
					res += "std::generate(";
					res += param.param_name;
					res += ".begin(),";
					res += param.param_name;
					if (info.mminfo.isIntegerFunction)
					{
						res += ".end(), []() { return ";
						res += "(typename ";
						res += param.param_type;
						res += "::value_type)";
						res += "mt64(); })";
					}
					else
					{
						res += ".end(), []() { return ";
						res += "(typename ";
						res += param.param_type;
						res += "::value_type)";
						res += "rd_fp(); })";
					}
				}
			}

			res += ";\n";
		}

		res += "\n";
		//do the function call
		res += indent;
		res += "helper_";
		res += info.strinfo.mmfuncname;
		res += "(";
		for (auto& param : params)
		{
			res += param.param_name;
			res += ", "; 
		}
		res.erase(res.end() - 2, res.end());
		res += ");\n\n";

		//Do the test;
		res += indent;
		res += "for(int i = 0; i < Result.size(); i++) {\n";
		int outnumber = 0;
		for (auto& param : params)
		{
			if (param.is_Output)
			{
				res += indent + indent;

				if (!info.mminfo.isIntegerFunction && !is_complex_func(info.mminfo.MathFunction))
				{
					res += "if(std::isnan(";
					res += param.param_name;
					res += "[i]))\n";
					res += indent + indent + indent;
					res += "EXPECT_TRUE(std::isnan(";
					if (info.mminfo.isInversePrefix)
						res += "1/";

					res += info.mminfo.MathFunction;
					if (info.mminfo.isInverseSuffix)
						res += "inv";
					if (outnumber > 0)
						res += std::to_string(outnumber);

					res += "(";
					for (auto& elem : params)
					{
						if (!elem.is_Output)
						{
							if (is_mask_type(elem.intrin_type))
							{
								res += elem.param_name;
								res += " >> ";
								res += " i ";
							}
							else
							{
								res += "(typename ";
								res += elem.param_type;
								res += "::value_type)";
								res += elem.param_name;
								res += "[i]";
							}
							res += ", ";
						}
					}
					res.erase(res.end() - 2, res.end());
					res += ")";

					if (info.mminfo.MathFunction == "div" && !info.mminfo.hasMask)
						res += ".quot";
					res += "));\n";
					res += indent + indent;
					res += "else {\n";
					res += indent + indent + indent;
				}

				if (is_complex_func(info.mminfo.MathFunction))
				{
					res += "auto cres = ";
					res += info.mminfo.MathFunction;
					res += "(";
					for (auto& elem : params)
					{
						if (!elem.is_Output)
						{
							if (is_mask_type(elem.intrin_type))
							{
								res += elem.param_name;
								res += " >> ";
								res += " i ";
							}
							else
							{
								res += "(typename ";
								res += elem.param_type;
								res += "::value_type)";
								res += elem.param_name;
								res += "[i],";
								res += "(typename ";
								res += elem.param_type;
								res += "::value_type)";
								res += elem.param_name;
								res += "[i+1]";
							}
							res += ", ";
						}
					}
					res.erase(res.end() - 2, res.end());
					res += ");\n";
					res += indent + indent;
					switch (info.mminfo.Suffix)
					{
					case packed_type_info::pd:
						res += "EXPECT_DOUBLE_EQ(";
						break;
					case packed_type_info::ps:
						res += "EXPECT_FLOAT_EQ(";
						break;
					default:
						res += "EXPECT_EQ(";
					}
					res += param.param_name;
					res += "[i],cres.real);\n";

					res += indent + indent;

					switch (info.mminfo.Suffix)
					{
					case packed_type_info::pd:
						res += "EXPECT_DOUBLE_EQ(";
						break;
					case packed_type_info::ps:
						res += "EXPECT_FLOAT_EQ(";
						break;
					default:
						res += "EXPECT_EQ(";
					}
					res += param.param_name;
					res += "[++i],cres.imag);\n";
				}
				else
				{
					if (info.mminfo.hasMask)
					{
						res += "const auto mask = (" + maskname + " >> i) & 1;\n";
						res += indent + indent;
					}
					switch (info.mminfo.Suffix)
					{
					case packed_type_info::pd:
						res += "EXPECT_DOUBLE_EQ(";
						break;
					case packed_type_info::ps:
						res += "EXPECT_FLOAT_EQ(";
						break;
					default:
						res += "EXPECT_EQ(";
					}
					res += param.param_name + "[i]";
					res += ",";
					if (info.mminfo.hasMask)
					{
						res += " !mask ? param_1[i] : ";
					}
					if (info.mminfo.isInversePrefix)
						res += "1/";

					res += info.mminfo.MathFunction;
					if (info.mminfo.isInverseSuffix)
						res += "inv";
					if (outnumber > 0)
						res += std::to_string(outnumber);

					res += "(";
					for (auto& elem : params)
					{
						if (!elem.is_Output)
						{
							if (is_mask_type(elem.intrin_type))
							{
								res += elem.param_name;
								res += " >> ";
								res += " i ";
							}
							else
							{
								res += "(typename ";
								res += elem.param_type;
								res += "::value_type)";
								res += elem.param_name;
								res += "[i]";
							}
							res += ", ";
						}
					}
					res.erase(res.end() - 2, res.end());
					res += ")";

					if (info.mminfo.MathFunction == "div" && !info.mminfo.hasMask)
						res += ".quot";
					res += ")";
					res += " << \"Input:\" ";
					for (auto& elem : params)
					{
						if (!elem.is_Output)
						{
							if (is_mask_type(elem.intrin_type))
							{
								res += " << \";\" << ((";
								res += elem.param_name;
								res += ">> i) & 1)";
							}
							else
							{
								res += " << \";\" <<";
								res += elem.param_name;
								res += "[i]";
							}
						}
					}
					res += ";\n";
					res += indent + indent;
					if (!info.mminfo.isIntegerFunction)
					{
						res += "}\n";
					}
				}
				outnumber++;
			}
		}
		res += indent;
		res += "}\n";
		//for (auto& param : params)
		//{
		//	if (param.is_Output)
		//	{

		//	}
		//};
		res += "}\n\n";
		return res;
	}
	void write_svml_tests(const svml_mapping_info& info, const fs::path& avxtestfile, const fs::path& avx512testfile)
	{
		std::string inc{ "#include \"../svml_test_definitions.h\"\n" };
		std::ofstream outstream;

		outstream.open(avx512testfile, std::ios::out | std::ios::app);
		outstream << inc << std::endl;
		outstream << "#ifdef __AVX512__\n\n";
		outstream << "#ifdef __clang__\n";
		//outstream << "#include \"../svml_prolog.h\"\n";
		outstream << "#include \"avx512_svml_intrin.h\"\n" << std::endl;
		outstream << "#endif\n";
		outstream.close();

		outstream.open(avxtestfile, std::ios::out | std::ios::app);

		outstream << inc << std::endl;
		outstream << "#ifdef __clang__\n";
		//outstream << "#include \"../svml_prolog.h\"\n";
		outstream << "#include \"avx_svml_intrin.h\"\n";
		outstream << "#endif\n";
		//outstream << "#include \"avx_svml_intrin.h\"\n" << std::endl;
		outstream.close();

		for (const auto& elem : info.svml)
		{
			if (!elem.mapping_valid)
			{
				::std::cerr << "No valid mapping for: " << elem.strinfo.mmfuncname << "! Not generating test"<<"\n";
				continue;
			}
			
			auto out = write_test_helper_function(elem);
			out += write_test(elem);

			std::ofstream outstream;
			switch (elem.mminfo.ReturnType)
			{
			case intrin_type_info::m512:
			case intrin_type_info::m512d:
			case intrin_type_info::m512i:
				outstream.open(avx512testfile, std::ios::out | std::ios::app);
				break;
			default:
				outstream.open(avxtestfile, std::ios::out | std::ios::app);
			}
			outstream << out << "\n\n";
			outstream << std::endl;
			outstream.close();
		}

		outstream.open(avx512testfile, std::ios::out | std::ios::app);
		outstream << "#endif" << std::endl;
		outstream.close();
	}


}