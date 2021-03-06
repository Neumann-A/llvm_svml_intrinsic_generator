///---------------------------------------------------------------------------------------------------
// file:		svml_test_definitions.h
//
// summary: 	Declares the svml test definitions class
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 30.04.2019
#pragma once
#ifndef INC_svml_test_definitions_H
#define INC_svml_test_definitions_H
///---------------------------------------------------------------------------------------------------

//Just to see the extra definitions

#include <immintrin.h>
#include <cstdint>
#include <type_traits>
#include <array>
#include <random>
#include <cmath>
#include <algorithm>
#include <gtest/gtest.h>
#include <complex>

//define aligned array type to workaround clang-cl bug not aligning array properly even with alignas
template <typename T, ::std::size_t N, std::size_t align = ::std::alignment_of_v< T>>
struct alignas(align) aligned_array : ::std::array<T, N> {};

//List of required types:
// pd, ps, epi8, epi16, epi32, epi64, epu8, epu16, epu32, epu64,
//std::int8_t vectors
using Vector2pd = aligned_array<double, 2, 16>;
static_assert(sizeof(Vector2pd) == sizeof(__m128d));
static_assert(std::alignment_of_v< Vector2pd > == std::alignment_of_v< __m128d >);
using Vector4pd = aligned_array<double, 4, 32>;
static_assert(sizeof(Vector4pd) == sizeof(__m256d));
static_assert(std::alignment_of_v< Vector4pd > == std::alignment_of_v< __m256d >);
using Vector8pd = aligned_array<double, 8, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector8pd) == sizeof(__m512d));
static_assert(std::alignment_of_v< Vector8pd > == std::alignment_of_v< __m512d >);
#endif

//Float vectors
using Vector4ps = aligned_array<float, 4, 16>;
static_assert(sizeof(Vector4ps) == sizeof(__m128));
static_assert(std::alignment_of_v< Vector4ps > == std::alignment_of_v< __m128>);
using Vector8ps = aligned_array<float, 8, 32>;
static_assert(sizeof(Vector8ps) == sizeof(__m256));
static_assert(std::alignment_of_v< Vector8ps > == std::alignment_of_v< __m256 >);
using Vector16ps = aligned_array<float, 16, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector16ps) == sizeof(__m512));
static_assert(std::alignment_of_v< Vector16ps > == std::alignment_of_v< __m512 >);
#endif

//Signed Integer
using Vector16epi8 = aligned_array<std::int8_t, 16, 16>;
static_assert(sizeof(Vector16epi8) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector16epi8 > == std::alignment_of_v< __m128i >);
using Vector32epi8 = aligned_array<std::int8_t, 32, 32>;
static_assert(sizeof(Vector32epi8) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector32epi8 > == std::alignment_of_v< __m256i >);
using Vector64epi8 = aligned_array<std::int8_t, 64, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector64epi8) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector64epi8 > == std::alignment_of_v< __m512i >);
#endif

using Vector8epi16 = aligned_array<std::int16_t, 8, 16>;
static_assert(sizeof(Vector8epi16) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector8epi16 > == std::alignment_of_v< __m128i >);
using Vector16epi16 = aligned_array<std::int16_t, 16, 32>;
static_assert(sizeof(Vector16epi16) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector16epi16 > == std::alignment_of_v< __m256i >);
using Vector32epi16 = aligned_array<std::int16_t, 32, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector32epi16) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector32epi16 > == std::alignment_of_v< __m512i >);
#endif

using Vector4epi32 = aligned_array<std::int32_t, 4, 16>;
static_assert(sizeof(Vector4epi32) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector4epi32 > == std::alignment_of_v< __m128i >);
using Vector8epi32 = aligned_array<std::int32_t, 8, 32>;
static_assert(sizeof(Vector8epi32) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector8epi32 > == std::alignment_of_v< __m256i >);
using Vector16epi32 = aligned_array<std::int32_t, 16, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector16epi32) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector16epi32 > == std::alignment_of_v< __m512i >);
#endif

using Vector2epi64 = aligned_array<std::int64_t, 2, 16>;
static_assert(sizeof(Vector2epi64) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector2epi64 > == std::alignment_of_v< __m128i >);
using Vector4epi64 = aligned_array<std::int64_t, 4, 32>;
static_assert(sizeof(Vector4epi64) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector4epi64 > == std::alignment_of_v< __m256i >);
using Vector8epi64 = aligned_array<std::int64_t, 8, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector8epi64) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector8epi64 > == std::alignment_of_v< __m512i >);
#endif

//Unsigned Integer
using Vector16epu8 = aligned_array<std::uint8_t, 16, 16>;
static_assert(sizeof(Vector16epu8) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector16epu8 > == std::alignment_of_v< __m128i >);
using Vector32epu8 = aligned_array<std::uint8_t, 32, 32>;
static_assert(sizeof(Vector32epu8) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector32epu8 > == std::alignment_of_v< __m256i >);
using Vector64epu8 = aligned_array<std::uint8_t, 64, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector64epu8) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector64epu8 > == std::alignment_of_v< __m512i >);
#endif

using Vector8epu16 = aligned_array<std::uint16_t, 8, 16>;
static_assert(sizeof(Vector8epu16) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector8epu16 > == std::alignment_of_v< __m128i >);
using Vector16epu16 = aligned_array<std::uint16_t, 16, 32>;
static_assert(sizeof(Vector16epu16) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector16epu16 > == std::alignment_of_v< __m256i >);
using Vector32epu16 = aligned_array<std::uint16_t, 32, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector32epu16) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector32epu16 > == std::alignment_of_v< __m512i >);
#endif

using Vector4epu32 = aligned_array<std::uint32_t, 4, 16>;
static_assert(sizeof(Vector4epu32) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector4epu32 > == std::alignment_of_v< __m128i >);
using Vector8epu32 = aligned_array<std::uint32_t, 8, 32>;
static_assert(sizeof(Vector8epu32) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector8epu32 > == std::alignment_of_v< __m256i >);
using Vector16epu32 = aligned_array<std::uint32_t, 16, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector16epu32) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector16epu32 > == std::alignment_of_v< __m512i >);
#endif

using Vector2epu64 = aligned_array<std::uint64_t, 2, 16>;
static_assert(sizeof(Vector2epu64) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector2epu64 > == std::alignment_of_v< __m128i >);
using Vector4epu64 = aligned_array<std::uint64_t, 4, 32>;
static_assert(sizeof(Vector4epu64) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector4epu64 > == std::alignment_of_v< __m256i >);
using Vector8epu64 = aligned_array<std::uint64_t, 8, 64>;
#ifdef __AVX512__
static_assert(sizeof(Vector8epu64) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector8epu64 > == std::alignment_of_v< __m512i >);
#endif

static std::random_device rd{};
static std::mt19937_64    mt64{};

inline auto rd_fp()
{
	static std::mt19937_64    mt64_2{ 15 };
	auto res = ((double)mt64_2() / (double)mt64_2());
	while (std::isnan(res))
		res = ((double)mt64_2() / (double)mt64_2());
	return res;
}


//using namespace std;

constexpr const long double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647;
constexpr const long double div_pi_180 = 180.0 / pi;
constexpr const long double pi_div_180 = pi/180.0;

template <typename T>
auto rem(T&& val1, T&& val2) { return div((std::decay_t<T>)val1, val2).rem; };

inline auto rem(std::uint16_t val1, std::uint16_t val2) { return div((std::int32_t)val1, (std::int32_t)val2).rem; };

inline auto rem(std::uint32_t val1, std::uint32_t val2) { return div((std::int64_t)val1, (std::int64_t)val2).rem; };

inline auto rem(std::uint64_t val1, std::uint64_t val2) { return val1 - (val1 / val2) * val2; };

template <typename T>
auto sind(T&& val1) -> std::decay_t<T> { return std::sin(val1* (std::decay_t<T>)pi_div_180); };
template <typename T, typename U>
auto sind(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return sind(val1);
	return def1;
}
template <typename T>
auto cosd(T&& val1) -> std::decay_t<T> { return std::cos(val1* (std::decay_t<T>)pi_div_180); };
template <typename T, typename U>
auto cosd(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return cosd(val1);
	return def1;
}
template <typename T>
auto tand(T&& val1) -> std::decay_t<T> { return std::tan(val1 * (std::decay_t<T>)pi_div_180); };
template <typename T, typename U>
auto tand(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return tand(val1);
	return def1;
}

template <typename T>
auto sincos(T&& val1) -> std::decay_t<T> { return std::sin(val1); };

template <typename T, typename U>
auto sincos(T&& def1, T&& def2, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::sin(val1);
	return def1;
}

template <typename T>
auto sincos1(T&& val1) -> std::decay_t<T> { return std::cos(val1); };
template <typename T, typename U>
auto sincos1(T&& def1, T&& def2, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::cos(val1);
	return def2;
}
//template <typename T>
//auto div(T&& val1, T&& val2) { return div((std::decay_t<T>)val1, val2); };

template <typename T>
auto divrem(T&& val1, T&& val2) { return div((std::decay_t<T>)val1, val2).quot; };

inline auto divrem(std::uint16_t val1, std::uint16_t val2) { return div((std::int32_t)val1, (std::int32_t)val2).quot; };

inline auto divrem(std::uint32_t val1, std::uint32_t val2) { return div((std::int64_t)val1, (std::int64_t)val2).quot; };

template <typename T>
auto divrem1(T&& val1, T&& val2) { return div((std::decay_t<T>)val1, val2).rem; };

inline auto divrem1(std::uint16_t val1, std::uint16_t val2) { return div((std::int32_t)val1, (std::int32_t)val2).rem; };

inline auto divrem1(std::uint32_t val1, std::uint32_t val2) { return div((std::int64_t)val1, (std::int64_t)val2).rem; };

template <typename T, typename U>
auto log(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::log(val1);
	return def1;
}
template <typename T, typename U>
auto log1p(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::log1p(val1);
	return def1;
}
template <typename T, typename U>
auto log10(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::log10(val1);
	return def1;
}
template <typename T, typename U>
auto log2(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::log2(val1);
	return def1;
}
template <typename T, typename U>
auto logb(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::logb(val1);
	return def1;
}
template <typename T, typename U>
auto exp(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::exp(val1);
	return def1;
}
template <typename T, typename U>
auto exp10(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return exp10(val1);
	return def1;
}
template <typename T, typename U>
auto exp2(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::exp2(val1);
	return def1;
}
template <typename T, typename U>
auto expm1(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::expm1(val1);
	return def1;
}
template <typename T, typename U>
auto trunc(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::trunc(val1);
	return def1;
}
template <typename T, typename U>
auto floor(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::floor(val1);
	return def1;
}
template <typename T, typename U>
auto ceil(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::ceil(val1);
	return def1;
}
template <typename T, typename U>
auto round(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::round(val1);
	return def1;
}
template <typename T, typename U>
auto rint(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::rint(val1);
	return def1;
}
template <typename T, typename U>
auto pow(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return std::pow(val1, val2);
	return def1;
}
template <typename T, typename U>
auto fmod(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return std::fmod(val1, val2);
	return def1;
}
template <typename T, typename U>
auto cbrt(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return cbrt(val1);
	return def1;
}
template <typename T, typename U>
auto sqrt(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return sqrt(val1);
	return def1;
}
template <typename T, typename U>
auto erf(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return erf(val1);
	return def1;
}
template <typename T, typename U>
auto erfc(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return erfc(val1);
	return def1;
}
template <typename T, typename U>
auto erfcinv(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return erfcinv(val1);
	return def1;
}
template <typename T, typename U>
auto erfinv(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return erfinv(val1);
	return def1;
}
template <typename T, typename U>
auto nearbyint(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return nearbyint(val1);
	return def1;
}
template <typename T, typename U>
auto hypot(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return hypot(val1, val2);
	return def1;
}
template <typename T, typename U>
auto cdfnorm(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return cdfnorm(val1);
	return def1;
}
template <typename T, typename U>
auto cdfnorminv(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return cdfnorminv(val1);
	return def1;
}
template <typename T, typename U>
auto atan(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return atan(val1);
	return def1;
}
template <typename T, typename U>
auto atan2(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return atan2(val1,val2);
	return def1;
}
template <typename T, typename U>
auto tan(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::tan(val1);
	return def1;
}
template <typename T, typename U>
auto tanh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::tanh(val1);
	return def1;
}
template <typename T, typename U>
auto atanh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::atanh(val1);
	return def1;
}
template <typename T, typename U>
auto sin(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::sin(val1);
	return def1;
}
template <typename T, typename U>
auto sinh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::sinh(val1);
	return def1;
}
template <typename T, typename U>
auto asinh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::asinh(val1);
	return def1;
}
template <typename T, typename U>
auto asin(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::asin(val1);
	return def1;
}
template <typename T, typename U>
auto cos(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::cos(val1);
	return def1;
}
template <typename T, typename U>
auto cosh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::cosh(val1);
	return def1;
}
template <typename T, typename U>
auto acosh(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::acosh(val1);
	return def1;
}
template <typename T, typename U>
auto acos(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
{
	if (mask & 1)
		return std::acos(val1);
	return def1;
}
//auto sincos(T&& def1, U&& mask, T&& val1) -> std::decay_t<T>
//{
//	if (mask & 1)
//		return std::cos(val1);
//	return def1;
//}

template <typename T, typename U>
auto div(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return val1 / val2;//std::div((std::decay_t<T>)val1,val2).quot;
	return def1;
}
template <typename T, typename U>
auto rem(T&& def1, U&& mask, T&& val1, T&& val2) -> std::decay_t<T>
{
	if (mask & 1)
		return std::remainder(val1, val2);
	return def1;
}

inline auto div(std::uint16_t val1, std::uint16_t val2)
{
	return std::div((std::int32_t)val1, (std::int32_t)val2);
}

inline auto div(std::uint32_t val1, std::uint32_t val2)
{
	return std::div((std::int64_t)val1, (std::int64_t)val2);
}

//This could probably generate worng results
inline auto div(std::uint64_t val1, std::uint64_t val2)
{
	struct ret { std::uint64_t quot; std::uint64_t rem;
	};
	return ret{ val1 / val2 , val1- (val1/val2)*val2};
}

template<typename T>
auto erfinv(T&& val1) -> std::decay_t<T>
{
	constexpr int k_max = 100;
	if (abs(val1) < 1.0)
	{
		using fp = std::decay_t<T>;
		fp res{ 0 };
		std::array<fp, k_max> c;
		fp sqrtpi{ sqrt((fp)pi) };
		c[0] = 1L;
		res += pow(sqrtpi * 0.5L * val1, 1);
		for (int k = 1; k < k_max; k++)
		{
			c[k] = 0;
			for (int m = 0; m <= k - 1; m++)
				c[k] += c[m] * c[k - 1 - m] / ((m + 1.0L)*(2.0L*m + 1.0L));
			res += c[k]/(2.0L*k+1.0L)*pow(sqrtpi*0.5L*val1,2*k+1);
		}
		return res;

	}
	//	return (std::decay_t<T>)1.0/2.0*sqrt((std::decay_t<T>)pi)*(val1+pi/12.0*pow(val1,3)+ 7.0*pi*pi/480.0*pow(val1, 5)+ 127.0*pi * pi * pi /40320.0*pow(val1, 7)+ 4369.0*pi*pi * pi *pi /5806080.0*pow(val1, 9)+ 34807.0*pi* pi * pi * pi * pi /182476800.0*pow(val1, 11));
	return NAN;
}

template<typename T>
auto erfcinv(T&& val1) -> std::decay_t<T>
{
	return erfinv((std::decay_t < T>)1.0L-val1);
}


template<typename T>
auto cdfnorm(T&& val1) -> std::decay_t<T>
{
	return (std::decay_t<T>)1.0/2.0*(1.0+erf(val1/sqrt(2)));
}
template<typename T>
auto cdfnorminv(T&& val1) -> std::decay_t<T>
{
	return sqrt(2.0)*erfinv(2.0*val1-1);
}

template<typename T> 
auto cexp(T&& val1, T&& val2)
{
	struct Res {
		std::decay_t<T> real{ 0 };
		std::decay_t<T> imag{ 0 };
	}res ;

	res.real += exp(val1) * cos(val2);
	res.imag += exp(val1) * sin(val2);

	return res;	
}

template<typename T>
auto clog(T&& val1, T&& val2)
{
	struct Res {
		std::decay_t<T> real{ 0 };
		std::decay_t<T> imag{ 0 };
	}res;

	res.real = log(sqrt(val1 * val1 + val2 * val2));
	res.imag = ::std::atan2(val2, val1);

	return res;
}

template<typename T>
auto csqrt(T&& val1, T&& val2)
{
	struct Res {
		std::decay_t<T> real{ 0 };
		std::decay_t<T> imag{ 0 };
	}res;

	res.real = sqrt((sqrt(val1*val1+val2*val2)+val1)/2.0L);
	res.imag = sqrt((sqrt(val1 * val1 + val2 * val2) - val1) / 2.0L);
	if (val2 < 0)
		res.imag = -res.imag;

	return res;
}

template<typename T>
auto exp10(T&& val1) -> std::decay_t<T>
{
	return (std::decay_t<T>)exp(std::log(10.0)*val1);
}
#endif	// INC_svml_test_definitions_H
// end of svml_test_definitions.h
