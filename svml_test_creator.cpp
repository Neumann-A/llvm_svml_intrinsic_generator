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
		std::string test_type;
		std::string param_name;
		intrin_type_info intrin_type;
		std::string test;
	};

	std::vector<test_param_info> params;

	const std::string indent = "    ";
	std::string  write_test_helper_function(const svml_definition_info& info)
	{
		std::string res;
		
		//Function declration
		res += "__declspec(noinline) void helper_";
		res += info.strinfo.mmfuncname;
		res += "(";
		
		res += "Vector";
		res += std::to_string(info.mminfo.PackedElements);
		res += to_string(packed_type_name_map_info, info.mminfo.Suffix);

		res += " &ret";

		res += ", ";
		for (auto& param : info.mminfo.ParamList)
		{
			if (is_mask_type(param))
			{

			}
			else
			{

			}
		}
		res += ")\n";

		//Function implementation
		res += "{\n";
		
		//Function prologue
		res += indent;

		//Intrinsic call
		res += indent;

		//Function epilogue
		res += indent;

		res += "}\n";

	}
	std::string  write_test(const svml_definition_info& info)
	{
		std::string testfunction;

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
		}
	}


}