///---------------------------------------------------------------------------------------------------
// file:		svml_assembly_creator.h
//
// summary: 	Declares the svml assembly creator class
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
// 
// author: Alexander
// date: 28.04.2019
#pragma once
#ifndef INC_svml_assembly_creator_H
#define INC_svml_assembly_creator_H
///---------------------------------------------------------------------------------------------------


#include <array>
#include <string_view>

#include "create_clang_svml_intrinsic.h"

namespace svml
{
	// Register to clobber in vdecl calling convention
	//constexpr ::std::array<::std::string_view,13> clobber_register;  // callee saved registers


	void write_svml_intrinsics(const svml_mapping_info& info, const fs::path& avxpath, const fs::path& avx512path);
}

#endif	// INC_svml_assembly_creator_H
// end of svml_assembly_creator.h
