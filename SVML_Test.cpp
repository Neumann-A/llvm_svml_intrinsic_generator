///-------------------------------------------------------------------------------------------------
// file:	SVML_Test.cpp
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 09.04.2019
///-------------------------------------------------------------------------------------------------
#define _ENABLE_EXTENDED_ALIGNED_STORAGE 1
#include <gtest/gtest.h>
#include <type_traits>
#include <immintrin.h>
#include <cstdint>
#include <array>
#include <iostream>
#include <iomanip>
#include <cmath>

//#include "aligned_array.h"

alignas(16) std::array<double, 2> align16;
alignas(32) std::array<double, 4> align32;
alignas(64) std::array<double, 4> align64;

static_assert(std::alignment_of_v< decltype(align16) > == 8);
//Those to fail with clang. 
//static_assert(std::alignment_of_v< decltype(align16) > == std::alignment_of_v< __m128d >);
//static_assert(std::alignment_of_v< decltype(align32) > == std::alignment_of_v< __m256d >);

template <typename T, ::std::size_t N, std::size_t align = ::std::alignment_of_v< T>> 
struct alignas(align) aligned_array : ::std::array<T, N> {};

//using aligned_double = std::aligned_storage_t<sizeof(double)*2,16>;
using Vector2 = aligned_array<double, 2, 16>;
using Vector4 = aligned_array<double, 4, 32>;
using Vector8 = aligned_array<double, 8, 64>;
static_assert(sizeof(double) == 8);
static_assert(std::alignment_of_v< Vector2 > == 16);
static_assert(std::alignment_of_v< Vector2 > == std::alignment_of_v< __m128d >);
static_assert(std::alignment_of_v< Vector4 > == std::alignment_of_v< __m256d >);
static_assert(sizeof(Vector2) == 2*sizeof(double));
static_assert(sizeof(Vector2) == sizeof(__m128d));
static_assert(sizeof(Vector4) == sizeof(__m256d));
//static_assert(sizeof(Vector8) == sizeof(__m512d));

//Floating point

using Vectorf4  = aligned_array<float, 4, 16>;
using Vectorf8  = aligned_array<float, 8, 32>;
using Vectorf16 = aligned_array<float, 16, 64>;
static_assert(sizeof(Vectorf4) == sizeof(__m128));
static_assert(sizeof(Vectorf8) == sizeof(__m256));
//static_assert(sizeof(Vectorf16) == sizeof(__m512));

#ifdef __clang__
extern "C"
{
#define __DEFAULT_FN_ATTRS __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
#define __DEFAULT_FN_ATTRS128 __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(128)))

	// Default register clobbering.
	//: "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm0", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
	// Plan
	// _vdecl calling convention seems to mean:
	// all values are takens as input from ymm registers (starting at 0) and results are returned from ymm registers (starting at 0)
	// a) in asm: used registers must be removed from default clobbering list
	// b) in asm: registers used as input and output must be linked 
	// c) there seems to be no need to allocate extra stack space for the function call since _vdecl symbols are effectivly vectorcall
	//	  symbols and only paramters passed on the stack or HVA arguments need extra shadow space (the svml symbols will not have so many
	//	  parameters)
	// d) would be good if clang would implement __vdecl calling convention as __vectorcall convention with different name mangling. 


	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sin_pd(__m256d input)
	{
		register __m256d regymm0 asm("ymm0") = input;
		__asm__ (
			"call __vdecl_sin4 \t\n"
			: [sin] "=v" (regymm0)
			: [in] "0" (regymm0)
			: "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
		);
		return regymm0;
	}

	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_cos_pd(__m256d input)
	{
		register __m256d regymm0 asm("ymm0") = input;
		__asm__ (
			"call __vdecl_cos4 \t\n"
			: [sin] "=v" (regymm0)
			: [in] "0" (regymm0)
			: "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
		);
		return regymm0;
	}

	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sincos_pd(__m256d* pcosres, __m256d input)
	{
		register __m256d regymm0 asm("ymm0") = input;
		register __m256d regymm1 asm("ymm1");
		__asm__ (//"vmovapd %in, %%ymm0 \t\n"
			//"sub $32, %%rsp \t\n"
			"call __vdecl_sincos4 \t\n"
			//"add $32, %%rsp \t\n"
			: [sin] "=v" (regymm0), [cos] "=v" (regymm1)
			:  [in] "0" (regymm0)
			: "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11", "%ymm2", "%ymm3", "%ymm4", "%ymm5"
		);
		*pcosres = regymm1;
		return regymm0;
	};

};

#endif

__declspec(noinline) void SinCos(Vector4& SinData, Vector4& CosData, Vector4 MyData)
{
	__m256d Input = _mm256_load_pd((double*)MyData.data());
	__m256d Output;
	__m256d Output2;
	Output2 = _mm256_sincos_pd(&Output, Input);
	_mm256_store_pd((double*)SinData.data(), Output2);
	_mm256_store_pd((double*)CosData.data(), Output);
	Output = _mm256_cos_pd(Input);;
	//Output2 = _mm256_sin_pd(Input);
	//_mm256_store_pd((double*)SinData.data(), Output2);
	_mm256_store_pd((double*)CosData.data(), Output);
	//auto Out3=_mm256_erfinv_pd(Input);
}



TEST(SVML_intrinsics_m256d, sincos) {
	constexpr const double pi = 3.141592653589793238462643383279502884197169399375;
	Vector4 MyData{ {0.0, pi / 6.0, pi * 0.5, 3.0 * pi * 0.25} };
	Vector4 SinData;
	Vector4 CosData;

	SinCos(SinData, CosData, MyData);
	for (auto i = 0; i < MyData.size(); ++i)
	{
		const auto sinres = std::sin(MyData[i]);
		const auto cosres = std::cos(MyData[i]);

		std::cout << "Sin result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << SinData[i] << "|\t" << std::setw(12) << sinres << '\n';
		std::cout << "Cos result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << CosData[i] << "|\t" << std::setw(12) << cosres << '\n';

		ASSERT_DOUBLE_EQ(sinres, SinData[i]);
		ASSERT_DOUBLE_EQ(cosres, CosData[i]);
	}
}
