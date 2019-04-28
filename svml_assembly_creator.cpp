///-------------------------------------------------------------------------------------------------
// file:	svml_assembly_creator.cpp
//
// summary:	
///-------------------------------------------------------------------------------------------------
#include "svml_assembly_creator.h"

#include <string>
namespace svml
{
	// Register to clobber in vdecl calling convention
	// "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm0", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
	constexpr ::std::array<::std::string_view, 13> clobber_register = {	"%ymm0",
																		"%ymm1",
																		"%ymm2",
																		"%ymm3",
																		"%ymm4",
																		"%ymm5",
																		"%rax",
																		"%rcx",
																		"%rdx",
																		"%r8",
																		"%r9",
																		"%r10", 
																		"%r11" };  // callee saved registers



	void write_svml_intrinsics(const svml_mapping_info& info, const fs::path& avxpath, const fs::path& avx512path)
	{
		for (const auto& elem : info.svml)
		{
			if (!elem.mapping_valid)
				continue;

			std::string mm_intrinsic_impl;

			to_string(intrin_param_map_info, elem.mminfo.ReturnType);



		}
	}

}