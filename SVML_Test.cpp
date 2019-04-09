///-------------------------------------------------------------------------------------------------
// file:	SVML_Test.cpp
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 09.04.2019
///-------------------------------------------------------------------------------------------------
#include <immintrin.h>
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
//extern __cdecl __m256d (&__vdecl_sincos4(__m256d))[2];
extern "C"
{
#define __DEFAULT_FN_ATTRS __attribute__((__always_inline__, __nodebug__))

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

	extern __m256d __vdecl_sincos4(__m256d); //The return value is nessecary so that clang does not insert a vzeroupper before the call!
	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sincos_pd(__m256d* pcosres, __m256d val)
	{	
		//Store param adresses in registers
		__asm mov rdi, rdx; // pcosres;
		__asm mov rsi, rcx; // return value;
		__vdecl_sincos4(val); // Changes RAX, RCX & RDX; Defined as	extern __m256d __vdecl_sincos4(__m256d); 
		//Write result into storage
		__asm vmovupd ymmword ptr [rdi], ymm1; //Write cosine result
		__asm vmovupd ymmword ptr [rsi], ymm0; //Write sine result into return value
		__m256d sinres; //Dummy return value; should deactivate the warning somehow; 
		return sinres; //Does nothing; Value already saved. 
	}

	//extern __m256d __vdecl_sincos4(__m256d); //The return value is nessecary so that clang does not insert a vzeroupper before the call!
	//static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sincos_pd(__m256d* pcosres, __m256d val)
	//{
	//	__m256d* rdxstor;
	//	__m256d* rcxstore;
	//	//Store param adresses in registers
	//	__asm mov rdxstor, rdx; // pcosres;
	//	__asm mov rcxstore, rcx; // return value;
	//	__vdecl_sincos4(val); // Changes RAX, RCX & RDX; Defined as	extern __m256d __vdecl_sincos4(__m256d); 
	//	//Write result into storage
	//	__asm vmovupd ymmword ptr[rdxstor], ymm1; //Write cosine result
	//	__asm vmovupd ymmword ptr[rcxstore], ymm0; //Write sine result into return value
	//	__m256d sinres; //Dummy return value; should deactivate the warning somehow; 
	//	return sinres; //Does nothing; Value already saved. 
	//}
}

#endif

__declspec(noinline) void SinCos(Vector4& SinData, Vector4& CosData, Vector4 MyData)
{
	__m256d Input = _mm256_loadu_pd(MyData.data());
	__m256d Output[2];

	Output[0] = _mm256_sincos_pd(&Output[1], Input);

	_mm256_store_pd(CosData.data(), Output[1]);
	_mm256_store_pd(SinData.data(), Output[0]);
}

int main()
{
	constexpr const double pi = 3.141592653589793238462643383279502884197169399375; 
	Vector4 MyData{ 0.0, pi/6.0, pi*0.5, 3.0*pi*0.25};
	Vector4 SinData;
	Vector4 CosData;
	
	SinCos(SinData, CosData, MyData);
	for (auto i = 0; i < MyData.size(); ++i)
	{
		std::cout << "Sin result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << SinData[i] << "|\t" << std::setw(12) << std::sin(MyData[i]) << '\n';
		std::cout << "Cos result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << CosData[i] << "|\t" << std::setw(12) << std::cos(MyData[i]) << '\n';
	}
	std::system("pause");
	return 0;
}



