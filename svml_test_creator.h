///---------------------------------------------------------------------------------------------------
// file:		C:\Sources\Repos\SVML\svml_test_creator.h
//
// summary: 	Declares the svml test creator class
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
// 
// author: Alexander
// date: 28.04.2019
#pragma once
#ifndef INC_svml_test_creator_H
#define INC_svml_test_creator_H
///---------------------------------------------------------------------------------------------------
#include <array>

#include "create_clang_svml_intrinsic.h"

namespace svml {
	void write_svml_tests(const svml_mapping_info& info, const fs::path& avxtestfile, const fs::path& avx512testfile);

}

#endif	// INC_svml_test_creator_H
// end of C:\Sources\Repos\SVML\svml_test_creator.h
