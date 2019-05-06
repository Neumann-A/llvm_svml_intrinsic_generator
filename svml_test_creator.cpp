///-------------------------------------------------------------------------------------------------
// file:	svml_test_creator.cpp
//
// summary:	Implements the svml test creator class
///-------------------------------------------------------------------------------------------------

#include "svml_test_creator.h"

#include <string>
#include <iostream>
namespace svml
{

	struct test_param_info
	{
		std::string param_type;
		std::string param_name;
		intrin_type_info intrin_type;
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
		
		res += build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix);

		res += " &ret";
		
		return_info = test_param_info{ build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix), "ret", info.mminfo.ReturnType };

		res += ", ";
		for (auto& param : info.mminfo.ParamList)
		{
			std::string param_name{"param_"};
			std::string param_type;
			param_name += std::to_string(params.size());
			if (is_mask_type(param)) //Mask
			{
				param_type = "std::int";
				param_type += std::to_string(info.mminfo.PackedElements);
				param_type = "_t ";
			}
			else if(is_pointer_type(param)) //Second Output
			{
				param_type = build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix);
				res += param_type;
				res += " &";
			}
			else //Input
			{
				res +="const ";
				param_type = build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix);
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
				res += " = _load_mask";
				res += std::to_string(info.mminfo.PackedElements);
				res += "(";
				res += "(";
				res += to_string(intrin_param_map_info, param.intrin_type);
				res += "*)&";
				res += param.param_name;
				res += ")";		
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
					res += " = ";
					//res += func_prefix;
					res += "(";
					res += to_string(intrin_param_map_info, param.intrin_type);
					res += "*) &";
					res += param.param_name;
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
			res += "*ret.data() =  (decltype(ret)::value_type)m_ret;\n";
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
					res += "*";
					res += param.linked_test_info.param_name;
					res += ".data() = (decltype(";
					res += param.linked_test_info.param_name;
					res += ")::value_type)";
					res += param.intrin_param_name;
					res += ";\n";
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

		params.push_back(test_param_info{ build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix), "Result", info.mminfo.ReturnType });
		for (auto& param : info.mminfo.ParamList)
		{
			std::string param_name{ "param_" };
			std::string param_type;
			param_name += std::to_string(params.size());
			if (is_mask_type(param)) //Mask
			{
				param_type = "std::int";
				param_type += std::to_string(info.mminfo.PackedElements);
				param_type = "_t ";
			}
			else if (is_pointer_type(param)) //Second Output
			{
				param_type = build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix);
			}
			else //Input
			{
				param_type = build_packed_type(info.mminfo.PackedElements, info.mminfo.Suffix);
			}
			params.push_back({ param_type , param_name , param });
		}

		res += "TEST(SVML_intrinsics";
		res += info.strinfo.retval;
		res += ", test";
		res += info.strinfo.mmfuncname;
		res += ") {\n";

		//Initial Inputs

		//do the function call
		res += indent;
		res += "helper_";
		res += info.strinfo.mmfuncname;
		res += "(";
		
		res += ");\n";

		//Do the test;
		res += "}\n\n";
		return res;
	}
	void write_svml_tests(const svml_mapping_info& info, const fs::path& avxtestfile, const fs::path& avx512testfile)
	{
		for (const auto& elem : info.svml)
		{
			if (!elem.mapping_valid)
			{
				::std::cerr << "No valid mapping for: " << elem.strinfo.mmfuncname << "! Not generating test"<<"\n";
				continue;
			}

			auto out = write_test_helper_function(elem);
			out = write_test(elem);
			std::cout << out;
		}
	}


}