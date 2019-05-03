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
	const std::string indent = "    ";
	std::string  write_test_helper_function(const svml_definition_info& info)
	{
		std::string res;
		
		res += "__declspec(noinline) void helper_";
		res += info.strinfo.mmfuncname;
		res += "(";
		
		res += "Vector";
		res += std::to_string(info.mminfo.PackedElements);
		res += to_string(packed_type_name_map_info, info.mminfo.Suffix);

		res += ", ";
		for (auto& param : info.mminfo.ParamList)
		{
			if (is_mask_type())
			{

			}
			else
			{

			}
		}
		res += ")";


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