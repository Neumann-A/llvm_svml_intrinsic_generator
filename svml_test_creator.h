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

namespace svml
{
	template <typename T, ::std::size_t N, std::size_t align = ::std::alignment_of_v< T>>
	struct alignas(align) aligned_array : ::std::array<T, N> {};
}

#endif	// INC_svml_test_creator_H
// end of C:\Sources\Repos\SVML\svml_test_creator.h
