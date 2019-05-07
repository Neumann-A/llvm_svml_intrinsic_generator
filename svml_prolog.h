///---------------------------------------------------------------------------------------------------
// file:		svml_prolog.h
//
// summary: 	
//
// Copyright (c) 2019 Alexander Neumann.
//
// author: Alexander
// date: 28.04.2019
#pragma once
#ifndef INC_svml_prolog_H
#define INC_svml_prolog_H
///---------------------------------------------------------------------------------------------------

#include <immintrin.h>
#define __SVML_INTRIN_PROLOG static __inline__ 
#define __DEFAULT_SVML_FN_ATTRS512 __attribute__((__always_inline__, __nodebug__, __target__("avx512"), __min_vector_width__(512)))
#define __DEFAULT_SVML_FN_ATTRS256 __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
#define __DEFAULT_SVML_FN_ATTRS128 __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(128)))

#endif	// INC_svml_prolog_H
// end of svml_prolog.h
