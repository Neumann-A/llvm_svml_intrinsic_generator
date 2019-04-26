///-------------------------------------------------------------------------------------------------
// file:	SVML_Test.cpp
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 09.04.2019
///-------------------------------------------------------------------------------------------------

#include <gtest/gtest.h>
#include <immintrin.h>
#include <cstdint>
#include <array>
#include <iostream>
#include <iomanip>
#include <cmath>

//Double
//  __declspec(align(32)) is required for compiling with clang -> else read access violation; VS has no problem without the declspec
using Vector2 = __declspec(align(32)) std::array<double, 2>;
using Vector4 = __declspec(align(32)) std::array<double, 4>;
using Vector8 = __declspec(align(32)) std::array<double, 8>;
static_assert(sizeof(Vector2)/8 == 2);
static_assert(sizeof(Vector2) == sizeof(__m128d));
static_assert(sizeof(Vector4) == sizeof(__m256d));
//static_assert(sizeof(Vector8) == sizeof(__m512d));

//Floating point

using Vectorf4  = __declspec(align(32)) std::array<float, 4>;
using Vectorf8  = __declspec(align(32)) std::array<float, 8>;
using Vectorf16 = __declspec(align(32)) std::array<float, 16>;
static_assert(sizeof(Vectorf4) == sizeof(__m128));
static_assert(sizeof(Vectorf8) == sizeof(__m256));
//static_assert(sizeof(Vectorf16) == sizeof(__m512));

#ifdef __clang__
extern "C"
{
#define __DEFAULT_FN_ATTRS __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
#define __DEFAULT_FN_ATTRS128 __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(128)))

	extern __m256d __vdecl_sin4(__m256d);
	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sin_pd(__m256d val)
	{
 		return __vdecl_sin4(val);
	}

	extern __m256d __vdecl_cos4(__m256d);
	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_cos_pd(__m256d val)
	{
		return __vdecl_cos4(val);
	}

	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sincos_pd(__m256d* pcosres, __m256d input)
	{
		__asm__(".intel_syntax noprefix");
		__asm__("sub $32, %rsp"); 
		__asm__("call __vdecl_sincos4 \t\n"
			: [sin] "+v" (input), [cos] "=v" (*pcosres)
			:
			: "%rax", "%rcx", "%rdx", "%rsp"
			);
		__asm__("add $32, %rsp");
		return input; // Input will be ymm0 and will be changed correctly
	};

}

#endif

__declspec(noinline) void SinCos(Vector4& SinData, Vector4& CosData, Vector4 MyData)
{
#ifdef __clang__
	__m256d Input = _mm256_loadu_pd(MyData.data());
	//__asm__(".intel_syntax noprefix");
	//__m256d Input;
	//__asm__("vmovupd %[Data], %[In]" : [In] "=v" (Input), [Data] "=&v" (MyData) :  );
#else
	__m256d Input = _mm256_load_pd(MyData.data());
#endif
	__m256d Output;
	Input = _mm256_sincos_pd(&Output, Input);
	_mm256_store_pd(SinData.data(), Input);
	_mm256_store_pd(CosData.data(), Output);
}



TEST(SVML_intrinsics_m256d, sincos) {
	constexpr const double pi = 3.141592653589793238462643383279502884197169399375;
	alignas(32) Vector4 MyData { 0.0, pi / 6.0, pi * 0.5, 3.0 * pi * 0.25 };
	alignas(32) Vector4 SinData;
	alignas(32) Vector4 CosData;

	SinCos(SinData, CosData, MyData);
	for (auto i = 0; i < MyData.size(); ++i )
	{
		const auto sinres = std::sin(MyData[i]);
		const auto cosres = std::cos(MyData[i]);

		ASSERT_DOUBLE_EQ(sinres, SinData[i]);
		ASSERT_DOUBLE_EQ(cosres, CosData[i]);
	}
}

//int main()
//{
//	constexpr const double pi = 3.141592653589793238462643383279502884197169399375; 
//	alignas(32) Vector4 MyData{ 0.0, pi/6.0, pi*0.5, 3.0*pi*0.25};
//	alignas(32) Vector4 SinData;
//	alignas(32) Vector4 CosData;
//	
//
//	SinCos(SinData, CosData, MyData);
//	for (auto i = 0; i < MyData.size(); ++i)
//	{
//		std::cout << "Sin result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << SinData[i] << "|\t" << std::setw(12) << std::sin(MyData[i]) << '\n';
//		std::cout << "Cos result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << CosData[i] << "|\t" << std::setw(12) << std::cos(MyData[i]) << '\n';
//	}
//	std::system("pause");
//	return 0;
//}



