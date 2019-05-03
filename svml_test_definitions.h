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
#define __AVX512__

#include <immintrin.h>
#include <cstdint>
#include <type_traits>
#include <array>

//define aligned array type to workaround clang-cl bug not aligning array properly even with alignas
template <typename T, ::std::size_t N, std::size_t align = ::std::alignment_of_v< T>>
struct alignas(align) aligned_array : ::std::array<T, N> {};

//List of required types:
// pd, ps, epi8, epi16, epi32, epi64, epu8, epu16, epu32, epu64,
//std::int8_t vectors
using Vector2pd = aligned_array<std::int8_t, 2, 16>;
static_assert(sizeof(Vector2pd) == sizeof(__m128d));
static_assert(std::alignment_of_v< Vector2pd > == std::alignment_of_v< __m128d >);
using Vector4pd = aligned_array<std::int8_t, 4, 32>;
static_assert(sizeof(Vector4pd) == sizeof(__m256d));
static_assert(std::alignment_of_v< Vector4pd > == std::alignment_of_v< __m256d >);
using Vector8pd = aligned_array<std::int8_t, 8, 64>;
static_assert(sizeof(Vector8pd) == sizeof(__m512d));
static_assert(std::alignment_of_v< Vector8pd > == std::alignment_of_v< __m512d >);

//Float vectors
using Vector4ps = aligned_array<float, 4, 16>;
static_assert(sizeof(Vector4ps) == sizeof(__m128));
static_assert(std::alignment_of_v< Vector4ps > == std::alignment_of_v< __m128>);
using Vector8ps = aligned_array<float, 8, 32>;
static_assert(sizeof(Vector8ps) == sizeof(__m256));
static_assert(std::alignment_of_v< Vector8ps > == std::alignment_of_v< __m256 >);
using Vector16ps = aligned_array<float, 16, 64>;
static_assert(sizeof(Vector16ps) == sizeof(__m512));
static_assert(std::alignment_of_v< Vector16ps > == std::alignment_of_v< __m512 >);

//Signed Integer
using Vector16epi8 = aligned_array<std::int8_t, 16, 16>;
static_assert(sizeof(Vector16epi8) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector16epi8 > == std::alignment_of_v< __m128i >);
using Vector32epi8 = aligned_array<std::int8_t, 32, 32>;
static_assert(sizeof(Vector32epi8) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector32epi8 > == std::alignment_of_v< __m256i >);
using Vector64epi8 = aligned_array<std::int8_t, 64, 64>;
static_assert(sizeof(Vector64epi8) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector64epi8 > == std::alignment_of_v< __m512i >);

using Vector8epi16 = aligned_array<std::int16_t, 8, 16>;
static_assert(sizeof(Vector8epi16) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector8epi16 > == std::alignment_of_v< __m128i >);
using Vector16epi16 = aligned_array<std::int16_t, 16, 32>;
static_assert(sizeof(Vector16epi16) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector16epi16 > == std::alignment_of_v< __m256i >);
using Vector32epi16 = aligned_array<std::int16_t, 32, 64>;
static_assert(sizeof(Vector32epi16) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector32epi16 > == std::alignment_of_v< __m512i >);

using Vector4epi32 = aligned_array<std::int32_t, 4, 16>;
static_assert(sizeof(Vector4epi32) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector4epi32 > == std::alignment_of_v< __m128i >);
using Vector8epi32 = aligned_array<std::int32_t, 8, 32>;
static_assert(sizeof(Vector8epi32) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector8epi32 > == std::alignment_of_v< __m256i >);
using Vector16epi32 = aligned_array<std::int32_t, 16, 64>;
static_assert(sizeof(Vector16epi32) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector16epi32 > == std::alignment_of_v< __m512i >);

using Vector2epi64 = aligned_array<std::int64_t, 2, 16>;
static_assert(sizeof(Vector2epi64) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector2epi64 > == std::alignment_of_v< __m128i >);
using Vector4epi64 = aligned_array<std::int64_t, 4, 32>;
static_assert(sizeof(Vector4epi64) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector4epi64 > == std::alignment_of_v< __m256i >);
using Vector8epi64 = aligned_array<std::int64_t, 8, 64>;
static_assert(sizeof(Vector8epi64) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector8epi64 > == std::alignment_of_v< __m512i >);

//Unsigned Integer
using Vector16epu8 = aligned_array<std::uint8_t, 16, 16>;
static_assert(sizeof(Vector16epu8) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector16epu8 > == std::alignment_of_v< __m128i >);
using Vector32epu8 = aligned_array<std::uint8_t, 32, 32>;
static_assert(sizeof(Vector32epu8) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector32epu8 > == std::alignment_of_v< __m256i >);
using Vector64epu8 = aligned_array<std::uint8_t, 64, 64>;
static_assert(sizeof(Vector64epu8) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector64epu8 > == std::alignment_of_v< __m512i >);

using Vector8epu16 = aligned_array<std::uint16_t, 8, 16>;
static_assert(sizeof(Vector8epu16) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector8epu16 > == std::alignment_of_v< __m128i >);
using Vector16epu16 = aligned_array<std::uint16_t, 16, 32>;
static_assert(sizeof(Vector16epu16) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector16epu16 > == std::alignment_of_v< __m256i >);
using Vector32epu16 = aligned_array<std::uint16_t, 32, 64>;
static_assert(sizeof(Vector32epu16) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector32epu16 > == std::alignment_of_v< __m512i >);

using Vector4epu32 = aligned_array<std::uint32_t, 4, 16>;
static_assert(sizeof(Vector4epu32) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector4epu32 > == std::alignment_of_v< __m128i >);
using Vector8epu32 = aligned_array<std::uint32_t, 8, 32>;
static_assert(sizeof(Vector8epu32) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector8epu32 > == std::alignment_of_v< __m256i >);
using Vector16epu32 = aligned_array<std::uint32_t, 16, 64>;
static_assert(sizeof(Vector16epu32) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector16epu32 > == std::alignment_of_v< __m512i >);

using Vector2epu64 = aligned_array<std::uint64_t, 2, 16>;
static_assert(sizeof(Vector2epu64) == sizeof(__m128i));
static_assert(std::alignment_of_v< Vector2epu64 > == std::alignment_of_v< __m128i >);
using Vector4epu64 = aligned_array<std::uint64_t, 4, 32>;
static_assert(sizeof(Vector4epu64) == sizeof(__m256i));
static_assert(std::alignment_of_v< Vector4epu64 > == std::alignment_of_v< __m256i >);
using Vector8epu64 = aligned_array<std::uint64_t, 8, 64>;
static_assert(sizeof(Vector8epu64) == sizeof(__m512i));
static_assert(std::alignment_of_v< Vector8epu64 > == std::alignment_of_v< __m512i >);

#endif	// INC_svml_test_definitions_H
// end of svml_test_definitions.h
