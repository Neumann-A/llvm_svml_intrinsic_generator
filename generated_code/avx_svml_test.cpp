#include "../svml_test_definitions.h"

#ifdef __clang__
#include "avx_svml_intrin.h"
#endif
__declspec(noinline) void helper__mm_div_epi8(Vector16epi8 &ret, const Vector16epi8 &param_0, const Vector16epi8 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epi8(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epi8) {
    Vector16epi8 Result;
    Vector16epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi8::value_type)mt64(); });
    Vector16epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi8::value_type)mt64(); });

    helper__mm_div_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epi8::value_type)param_1[i], (typename Vector16epi8::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epi16(Vector8epi16 &ret, const Vector8epi16 &param_0, const Vector8epi16 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epi16(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epi16) {
    Vector8epi16 Result;
    Vector8epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi16::value_type)mt64(); });
    Vector8epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi16::value_type)mt64(); });

    helper__mm_div_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epi16::value_type)param_1[i], (typename Vector8epi16::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epi32(Vector4epi32 &ret, const Vector4epi32 &param_0, const Vector4epi32 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epi32(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epi32) {
    Vector4epi32 Result;
    Vector4epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epi32::value_type)mt64(); });
    Vector4epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epi32::value_type)mt64(); });

    helper__mm_div_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector4epi32::value_type)param_1[i], (typename Vector4epi32::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epi64(Vector2epi64 &ret, const Vector2epi64 &param_0, const Vector2epi64 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epi64(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epi64) {
    Vector2epi64 Result;
    Vector2epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2epi64::value_type)mt64(); });
    Vector2epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2epi64::value_type)mt64(); });

    helper__mm_div_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector2epi64::value_type)param_1[i], (typename Vector2epi64::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epu8(Vector16epu8 &ret, const Vector16epu8 &param_0, const Vector16epu8 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epu8(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epu8) {
    Vector16epu8 Result;
    Vector16epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu8::value_type)mt64(); });
    Vector16epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu8::value_type)mt64(); });

    helper__mm_div_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epu8::value_type)param_1[i], (typename Vector16epu8::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epu16(Vector8epu16 &ret, const Vector8epu16 &param_0, const Vector8epu16 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epu16(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epu16) {
    Vector8epu16 Result;
    Vector8epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu16::value_type)mt64(); });
    Vector8epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu16::value_type)mt64(); });

    helper__mm_div_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epu16::value_type)param_1[i], (typename Vector8epu16::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epu32(Vector4epu32 &ret, const Vector4epu32 &param_0, const Vector4epu32 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epu32(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epu32) {
    Vector4epu32 Result;
    Vector4epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epu32::value_type)mt64(); });
    Vector4epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epu32::value_type)mt64(); });

    helper__mm_div_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector4epu32::value_type)param_1[i], (typename Vector4epu32::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_div_epu64(Vector2epu64 &ret, const Vector2epu64 &param_0, const Vector2epu64 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_div_epu64(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_div_epu64) {
    Vector2epu64 Result;
    Vector2epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2epu64::value_type)mt64(); });
    Vector2epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2epu64::value_type)mt64(); });

    helper__mm_div_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector2epu64::value_type)param_1[i], (typename Vector2epu64::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epi8(Vector16epi8 &ret, const Vector16epi8 &param_0, const Vector16epi8 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epi8(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epi8) {
    Vector16epi8 Result;
    Vector16epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi8::value_type)mt64(); });
    Vector16epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi8::value_type)mt64(); });

    helper__mm_rem_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epi8::value_type)param_1[i], (typename Vector16epi8::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epi16(Vector8epi16 &ret, const Vector8epi16 &param_0, const Vector8epi16 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epi16(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epi16) {
    Vector8epi16 Result;
    Vector8epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi16::value_type)mt64(); });
    Vector8epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi16::value_type)mt64(); });

    helper__mm_rem_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epi16::value_type)param_1[i], (typename Vector8epi16::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epi32(Vector4epi32 &ret, const Vector4epi32 &param_0, const Vector4epi32 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epi32(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epi32) {
    Vector4epi32 Result;
    Vector4epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epi32::value_type)mt64(); });
    Vector4epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epi32::value_type)mt64(); });

    helper__mm_rem_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector4epi32::value_type)param_1[i], (typename Vector4epi32::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epi64(Vector2epi64 &ret, const Vector2epi64 &param_0, const Vector2epi64 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epi64(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epi64) {
    Vector2epi64 Result;
    Vector2epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2epi64::value_type)mt64(); });
    Vector2epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2epi64::value_type)mt64(); });

    helper__mm_rem_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector2epi64::value_type)param_1[i], (typename Vector2epi64::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epu8(Vector16epu8 &ret, const Vector16epu8 &param_0, const Vector16epu8 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epu8(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epu8) {
    Vector16epu8 Result;
    Vector16epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu8::value_type)mt64(); });
    Vector16epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu8::value_type)mt64(); });

    helper__mm_rem_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epu8::value_type)param_1[i], (typename Vector16epu8::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epu16(Vector8epu16 &ret, const Vector8epu16 &param_0, const Vector8epu16 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epu16(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epu16) {
    Vector8epu16 Result;
    Vector8epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu16::value_type)mt64(); });
    Vector8epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu16::value_type)mt64(); });

    helper__mm_rem_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epu16::value_type)param_1[i], (typename Vector8epu16::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epu32(Vector4epu32 &ret, const Vector4epu32 &param_0, const Vector4epu32 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epu32(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epu32) {
    Vector4epu32 Result;
    Vector4epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epu32::value_type)mt64(); });
    Vector4epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epu32::value_type)mt64(); });

    helper__mm_rem_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector4epu32::value_type)param_1[i], (typename Vector4epu32::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_rem_epu64(Vector2epu64 &ret, const Vector2epu64 &param_0, const Vector2epu64 &param_1)
{
    __m128i impl_param_0 = _mm_load_si128((__m128i*)param_0.data());
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());

    __m128i m_ret = _mm_rem_epu64(impl_param_0, impl_param_1);

    _mm_store_si128((__m128i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128i, test_mm_rem_epu64) {
    Vector2epu64 Result;
    Vector2epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2epu64::value_type)mt64(); });
    Vector2epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2epu64::value_type)mt64(); });

    helper__mm_rem_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector2epu64::value_type)param_1[i], (typename Vector2epu64::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epi8(Vector32epi8 &ret, const Vector32epi8 &param_0, const Vector32epi8 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epi8(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epi8) {
    Vector32epi8 Result;
    Vector32epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epi8::value_type)mt64(); });
    Vector32epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epi8::value_type)mt64(); });

    helper__mm256_div_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector32epi8::value_type)param_1[i], (typename Vector32epi8::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epi16(Vector16epi16 &ret, const Vector16epi16 &param_0, const Vector16epi16 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epi16(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epi16) {
    Vector16epi16 Result;
    Vector16epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi16::value_type)mt64(); });
    Vector16epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi16::value_type)mt64(); });

    helper__mm256_div_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epi16::value_type)param_1[i], (typename Vector16epi16::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epi32(Vector8epi32 &ret, const Vector8epi32 &param_0, const Vector8epi32 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epi32(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epi32) {
    Vector8epi32 Result;
    Vector8epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi32::value_type)mt64(); });
    Vector8epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi32::value_type)mt64(); });

    helper__mm256_div_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epi32::value_type)param_1[i], (typename Vector8epi32::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epi64(Vector4epi64 &ret, const Vector4epi64 &param_0, const Vector4epi64 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epi64(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epi64) {
    Vector4epi64 Result;
    Vector4epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epi64::value_type)mt64(); });
    Vector4epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epi64::value_type)mt64(); });

    helper__mm256_div_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector4epi64::value_type)param_1[i], (typename Vector4epi64::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epu8(Vector32epu8 &ret, const Vector32epu8 &param_0, const Vector32epu8 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epu8(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epu8) {
    Vector32epu8 Result;
    Vector32epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epu8::value_type)mt64(); });
    Vector32epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epu8::value_type)mt64(); });

    helper__mm256_div_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector32epu8::value_type)param_1[i], (typename Vector32epu8::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epu16(Vector16epu16 &ret, const Vector16epu16 &param_0, const Vector16epu16 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epu16(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epu16) {
    Vector16epu16 Result;
    Vector16epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu16::value_type)mt64(); });
    Vector16epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu16::value_type)mt64(); });

    helper__mm256_div_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epu16::value_type)param_1[i], (typename Vector16epu16::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epu32(Vector8epu32 &ret, const Vector8epu32 &param_0, const Vector8epu32 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epu32(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epu32) {
    Vector8epu32 Result;
    Vector8epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu32::value_type)mt64(); });
    Vector8epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu32::value_type)mt64(); });

    helper__mm256_div_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epu32::value_type)param_1[i], (typename Vector8epu32::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_div_epu64(Vector4epu64 &ret, const Vector4epu64 &param_0, const Vector4epu64 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_div_epu64(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_div_epu64) {
    Vector4epu64 Result;
    Vector4epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epu64::value_type)mt64(); });
    Vector4epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epu64::value_type)mt64(); });

    helper__mm256_div_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector4epu64::value_type)param_1[i], (typename Vector4epu64::value_type)param_2[i]).quot) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epi8(Vector32epi8 &ret, const Vector32epi8 &param_0, const Vector32epi8 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epi8(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epi8) {
    Vector32epi8 Result;
    Vector32epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epi8::value_type)mt64(); });
    Vector32epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epi8::value_type)mt64(); });

    helper__mm256_rem_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector32epi8::value_type)param_1[i], (typename Vector32epi8::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epi16(Vector16epi16 &ret, const Vector16epi16 &param_0, const Vector16epi16 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epi16(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epi16) {
    Vector16epi16 Result;
    Vector16epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi16::value_type)mt64(); });
    Vector16epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi16::value_type)mt64(); });

    helper__mm256_rem_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epi16::value_type)param_1[i], (typename Vector16epi16::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epi32(Vector8epi32 &ret, const Vector8epi32 &param_0, const Vector8epi32 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epi32(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epi32) {
    Vector8epi32 Result;
    Vector8epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi32::value_type)mt64(); });
    Vector8epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi32::value_type)mt64(); });

    helper__mm256_rem_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epi32::value_type)param_1[i], (typename Vector8epi32::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epi64(Vector4epi64 &ret, const Vector4epi64 &param_0, const Vector4epi64 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epi64(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epi64) {
    Vector4epi64 Result;
    Vector4epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epi64::value_type)mt64(); });
    Vector4epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epi64::value_type)mt64(); });

    helper__mm256_rem_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector4epi64::value_type)param_1[i], (typename Vector4epi64::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epu8(Vector32epu8 &ret, const Vector32epu8 &param_0, const Vector32epu8 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epu8(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epu8) {
    Vector32epu8 Result;
    Vector32epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epu8::value_type)mt64(); });
    Vector32epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epu8::value_type)mt64(); });

    helper__mm256_rem_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector32epu8::value_type)param_1[i], (typename Vector32epu8::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epu16(Vector16epu16 &ret, const Vector16epu16 &param_0, const Vector16epu16 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epu16(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epu16) {
    Vector16epu16 Result;
    Vector16epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu16::value_type)mt64(); });
    Vector16epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu16::value_type)mt64(); });

    helper__mm256_rem_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epu16::value_type)param_1[i], (typename Vector16epu16::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epu32(Vector8epu32 &ret, const Vector8epu32 &param_0, const Vector8epu32 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epu32(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epu32) {
    Vector8epu32 Result;
    Vector8epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu32::value_type)mt64(); });
    Vector8epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu32::value_type)mt64(); });

    helper__mm256_rem_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epu32::value_type)param_1[i], (typename Vector8epu32::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm256_rem_epu64(Vector4epu64 &ret, const Vector4epu64 &param_0, const Vector4epu64 &param_1)
{
    __m256i impl_param_0 = _mm256_load_si256((__m256i*)param_0.data());
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());

    __m256i m_ret = _mm256_rem_epu64(impl_param_0, impl_param_1);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256i, test_mm256_rem_epu64) {
    Vector4epu64 Result;
    Vector4epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4epu64::value_type)mt64(); });
    Vector4epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epu64::value_type)mt64(); });

    helper__mm256_rem_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector4epu64::value_type)param_1[i], (typename Vector4epu64::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
            }
}




__declspec(noinline) void helper__mm_divrem_epi32(Vector4epi32 &ret, Vector4epi32 &param_0, const Vector4epi32 &param_1, const Vector4epi32 &param_2)
{
    __m128i impl_param_0;
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());
    __m128i impl_param_2 = _mm_load_si128((__m128i*)param_2.data());

    __m128i m_ret = _mm_divrem_epi32(&impl_param_0, impl_param_1, impl_param_2);

    _mm_store_si128((__m128i*)ret.data(), m_ret);
    _mm_store_si128((__m128i*)param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m128i, test_mm_divrem_epi32) {
    Vector4epi32 Result;
    Vector4epi32 param_1;
    Vector4epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epi32::value_type)mt64(); });
    Vector4epi32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector4epi32::value_type)mt64(); });

    helper__mm_divrem_epi32(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],divrem((typename Vector4epi32::value_type)param_2[i], (typename Vector4epi32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
                EXPECT_EQ(param_1[i],divrem1((typename Vector4epi32::value_type)param_2[i], (typename Vector4epi32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
            }
}




__declspec(noinline) void helper__mm_divrem_epu32(Vector4epu32 &ret, Vector4epu32 &param_0, const Vector4epu32 &param_1, const Vector4epu32 &param_2)
{
    __m128i impl_param_0;
    __m128i impl_param_1 = _mm_load_si128((__m128i*)param_1.data());
    __m128i impl_param_2 = _mm_load_si128((__m128i*)param_2.data());

    __m128i m_ret = _mm_divrem_epu32(&impl_param_0, impl_param_1, impl_param_2);

    _mm_store_si128((__m128i*)ret.data(), m_ret);
    _mm_store_si128((__m128i*)param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m128i, test_mm_divrem_epu32) {
    Vector4epu32 Result;
    Vector4epu32 param_1;
    Vector4epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4epu32::value_type)mt64(); });
    Vector4epu32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector4epu32::value_type)mt64(); });

    helper__mm_divrem_epu32(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],divrem((typename Vector4epu32::value_type)param_2[i], (typename Vector4epu32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
                EXPECT_EQ(param_1[i],divrem1((typename Vector4epu32::value_type)param_2[i], (typename Vector4epu32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
            }
}




__declspec(noinline) void helper__mm256_divrem_epi32(Vector8epi32 &ret, Vector8epi32 &param_0, const Vector8epi32 &param_1, const Vector8epi32 &param_2)
{
    __m256i impl_param_0;
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());
    __m256i impl_param_2 = _mm256_load_si256((__m256i*)param_2.data());

    __m256i m_ret = _mm256_divrem_epi32(&impl_param_0, impl_param_1, impl_param_2);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);
    _mm256_store_si256((__m256i*)param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m256i, test_mm256_divrem_epi32) {
    Vector8epi32 Result;
    Vector8epi32 param_1;
    Vector8epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi32::value_type)mt64(); });
    Vector8epi32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8epi32::value_type)mt64(); });

    helper__mm256_divrem_epi32(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],divrem((typename Vector8epi32::value_type)param_2[i], (typename Vector8epi32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
                EXPECT_EQ(param_1[i],divrem1((typename Vector8epi32::value_type)param_2[i], (typename Vector8epi32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
            }
}




__declspec(noinline) void helper__mm256_divrem_epu32(Vector8epu32 &ret, Vector8epu32 &param_0, const Vector8epu32 &param_1, const Vector8epu32 &param_2)
{
    __m256i impl_param_0;
    __m256i impl_param_1 = _mm256_load_si256((__m256i*)param_1.data());
    __m256i impl_param_2 = _mm256_load_si256((__m256i*)param_2.data());

    __m256i m_ret = _mm256_divrem_epu32(&impl_param_0, impl_param_1, impl_param_2);

    _mm256_store_si256((__m256i*)ret.data(), m_ret);
    _mm256_store_si256((__m256i*)param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m256i, test_mm256_divrem_epu32) {
    Vector8epu32 Result;
    Vector8epu32 param_1;
    Vector8epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu32::value_type)mt64(); });
    Vector8epu32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8epu32::value_type)mt64(); });

    helper__mm256_divrem_epu32(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],divrem((typename Vector8epu32::value_type)param_2[i], (typename Vector8epu32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
                EXPECT_EQ(param_1[i],divrem1((typename Vector8epu32::value_type)param_2[i], (typename Vector8epu32::value_type)param_3[i])) << "Input:"  << ";" <<param_2[i] << ";" <<param_3[i];
            }
}




__declspec(noinline) void helper__mm_sin_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_sin_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_sin_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_sin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sin((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sin((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_sin_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_sin_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_sin_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_sin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sin((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sin((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sin_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_sin_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_sin_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_sin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sin((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sin((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sin_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_sin_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_sin_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_sin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sin((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sin((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cos_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cos_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cos_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cos((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cos((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cos_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cos_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cos_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cos((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cos((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cos_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cos_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cos_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cos((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cos((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cos_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cos_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cos_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cos((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cos((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_sincos_ps(Vector4ps &ret, Vector4ps &param_0, const Vector4ps &param_1)
{
    __m128 impl_param_0;
    __m128 impl_param_1 = _mm_load_ps(param_1.data());

    __m128 m_ret = _mm_sincos_ps(&impl_param_0, impl_param_1);

    _mm_store_ps(ret.data(), m_ret);
    _mm_store_ps(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m128, test_mm_sincos_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    Vector4ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_sincos_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sincos((typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sincos((typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
        if(std::isnan(param_1[i]))
            EXPECT_TRUE(std::isnan(sincos1((typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(param_1[i],sincos1((typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_sincos_pd(Vector2pd &ret, Vector2pd &param_0, const Vector2pd &param_1)
{
    __m128d impl_param_0;
    __m128d impl_param_1 = _mm_load_pd(param_1.data());

    __m128d m_ret = _mm_sincos_pd(&impl_param_0, impl_param_1);

    _mm_store_pd(ret.data(), m_ret);
    _mm_store_pd(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m128d, test_mm_sincos_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    Vector2pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_sincos_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sincos((typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sincos((typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
        if(std::isnan(param_1[i]))
            EXPECT_TRUE(std::isnan(sincos1((typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(param_1[i],sincos1((typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sincos_ps(Vector8ps &ret, Vector8ps &param_0, const Vector8ps &param_1)
{
    __m256 impl_param_0;
    __m256 impl_param_1 = _mm256_load_ps(param_1.data());

    __m256 m_ret = _mm256_sincos_ps(&impl_param_0, impl_param_1);

    _mm256_store_ps(ret.data(), m_ret);
    _mm256_store_ps(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m256, test_mm256_sincos_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    Vector8ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_sincos_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sincos((typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sincos((typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
        if(std::isnan(param_1[i]))
            EXPECT_TRUE(std::isnan(sincos1((typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(param_1[i],sincos1((typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sincos_pd(Vector4pd &ret, Vector4pd &param_0, const Vector4pd &param_1)
{
    __m256d impl_param_0;
    __m256d impl_param_1 = _mm256_load_pd(param_1.data());

    __m256d m_ret = _mm256_sincos_pd(&impl_param_0, impl_param_1);

    _mm256_store_pd(ret.data(), m_ret);
    _mm256_store_pd(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m256d, test_mm256_sincos_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    Vector4pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_sincos_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sincos((typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sincos((typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
        if(std::isnan(param_1[i]))
            EXPECT_TRUE(std::isnan(sincos1((typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(param_1[i],sincos1((typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_tan_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_tan_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_tan_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_tan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tan((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tan((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_tan_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_tan_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_tan_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_tan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tan((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tan((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tan_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_tan_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_tan_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_tan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tan((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tan((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tan_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_tan_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_tan_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_tan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tan((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tan((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_asin_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_asin_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_asin_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_asin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asin((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],asin((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_asin_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_asin_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_asin_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_asin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asin((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],asin((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_asin_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_asin_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_asin_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_asin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asin((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],asin((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_asin_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_asin_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_asin_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_asin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asin((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],asin((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_acos_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_acos_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_acos_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_acos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acos((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],acos((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_acos_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_acos_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_acos_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_acos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acos((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],acos((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_acos_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_acos_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_acos_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_acos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acos((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],acos((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_acos_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_acos_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_acos_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_acos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acos((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],acos((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_atan_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_atan_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_atan_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_atan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atan((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_atan_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_atan_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_atan_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_atan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atan((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atan_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_atan_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_atan_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_atan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atan((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atan_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_atan_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_atan_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_atan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atan((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_atan2_ps(Vector4ps &ret, const Vector4ps &param_0, const Vector4ps &param_1)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());
    __m128 impl_param_1 = _mm_load_ps(param_1.data());

    __m128 m_ret = _mm_atan2_ps(impl_param_0, impl_param_1);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_atan2_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });
    Vector4ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_atan2_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan2((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atan2((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_atan2_pd(Vector2pd &ret, const Vector2pd &param_0, const Vector2pd &param_1)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());
    __m128d impl_param_1 = _mm_load_pd(param_1.data());

    __m128d m_ret = _mm_atan2_pd(impl_param_0, impl_param_1);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_atan2_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });
    Vector2pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_atan2_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan2((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atan2((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atan2_ps(Vector8ps &ret, const Vector8ps &param_0, const Vector8ps &param_1)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());
    __m256 impl_param_1 = _mm256_load_ps(param_1.data());

    __m256 m_ret = _mm256_atan2_ps(impl_param_0, impl_param_1);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_atan2_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });
    Vector8ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_atan2_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan2((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atan2((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atan2_pd(Vector4pd &ret, const Vector4pd &param_0, const Vector4pd &param_1)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());
    __m256d impl_param_1 = _mm256_load_pd(param_1.data());

    __m256d m_ret = _mm256_atan2_pd(impl_param_0, impl_param_1);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_atan2_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });
    Vector4pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_atan2_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atan2((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atan2((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_sind_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_sind_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_sind_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_sind_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sind((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sind((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_sind_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_sind_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_sind_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_sind_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sind((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sind((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sind_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_sind_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_sind_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_sind_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sind((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sind((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sind_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_sind_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_sind_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_sind_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sind((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sind((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cosd_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cosd_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cosd_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cosd_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosd((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cosd((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cosd_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cosd_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cosd_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cosd_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosd((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cosd((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cosd_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cosd_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cosd_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cosd_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosd((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cosd((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cosd_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cosd_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cosd_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cosd_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosd((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cosd((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_tand_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_tand_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_tand_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_tand_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tand((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tand((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_tand_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_tand_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_tand_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_tand_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tand((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tand((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tand_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_tand_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_tand_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_tand_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tand((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tand((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tand_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_tand_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_tand_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_tand_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tand((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tand((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_sinh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_sinh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_sinh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_sinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sinh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sinh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_sinh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_sinh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_sinh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_sinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sinh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sinh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sinh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_sinh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_sinh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_sinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sinh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sinh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_sinh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_sinh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_sinh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_sinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sinh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sinh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cosh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cosh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cosh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cosh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cosh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cosh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cosh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cosh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cosh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cosh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cosh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cosh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cosh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cosh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cosh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cosh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cosh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_tanh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_tanh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_tanh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_tanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tanh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tanh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_tanh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_tanh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_tanh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_tanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tanh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tanh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tanh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_tanh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_tanh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_tanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tanh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],tanh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_tanh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_tanh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_tanh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_tanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(tanh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],tanh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_asinh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_asinh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_asinh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_asinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asinh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],asinh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_asinh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_asinh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_asinh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_asinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asinh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],asinh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_asinh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_asinh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_asinh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_asinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asinh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],asinh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_asinh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_asinh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_asinh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_asinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(asinh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],asinh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_acosh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_acosh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_acosh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_acosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acosh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],acosh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_acosh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_acosh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_acosh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_acosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acosh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],acosh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_acosh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_acosh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_acosh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_acosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acosh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],acosh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_acosh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_acosh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_acosh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_acosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(acosh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],acosh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_atanh_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_atanh_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_atanh_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_atanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atanh((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atanh((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_atanh_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_atanh_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_atanh_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_atanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atanh((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atanh((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atanh_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_atanh_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_atanh_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_atanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atanh((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],atanh((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_atanh_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_atanh_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_atanh_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_atanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(atanh((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],atanh((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_log_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_log_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_log_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_log_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_log_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_log_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_log_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_log_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_log_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_log_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_log_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_log_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log1p_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_log1p_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_log1p_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_log1p_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log1p((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log1p((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log1p_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_log1p_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_log1p_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_log1p_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log1p((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log1p((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log1p_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_log1p_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_log1p_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_log1p_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log1p((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log1p((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log1p_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_log1p_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_log1p_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_log1p_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log1p((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log1p((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log10_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_log10_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_log10_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_log10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log10((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log10((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log10_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_log10_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_log10_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_log10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log10((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log10((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log10_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_log10_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_log10_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_log10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log10((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log10((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log10_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_log10_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_log10_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_log10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log10((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log10((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log2_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_log2_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_log2_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_log2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log2((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log2((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_log2_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_log2_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_log2_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_log2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log2((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log2((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log2_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_log2_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_log2_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_log2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log2((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],log2((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_log2_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_log2_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_log2_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_log2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(log2((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],log2((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_logb_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_logb_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_logb_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_logb_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(logb((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],logb((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_logb_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_logb_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_logb_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_logb_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(logb((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],logb((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_logb_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_logb_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_logb_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_logb_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(logb((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],logb((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_logb_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_logb_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_logb_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_logb_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(logb((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],logb((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_exp_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_exp_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_exp_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_exp_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_exp_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_exp_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_exp_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_exp_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_exp_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_exp_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_exp_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_exp_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp10_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_exp10_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_exp10_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_exp10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp10((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp10((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp10_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_exp10_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_exp10_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_exp10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp10((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp10((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp10_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_exp10_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_exp10_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_exp10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp10((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp10((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp10_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_exp10_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_exp10_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_exp10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp10((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp10((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp2_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_exp2_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_exp2_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_exp2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp2((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp2((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_exp2_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_exp2_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_exp2_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_exp2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp2((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp2((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp2_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_exp2_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_exp2_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_exp2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp2((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],exp2((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_exp2_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_exp2_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_exp2_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_exp2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(exp2((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],exp2((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_expm1_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_expm1_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_expm1_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_expm1_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(expm1((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],expm1((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_expm1_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_expm1_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_expm1_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_expm1_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(expm1((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],expm1((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_expm1_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_expm1_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_expm1_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_expm1_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(expm1((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],expm1((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_expm1_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_expm1_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_expm1_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_expm1_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(expm1((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],expm1((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_pow_ps(Vector4ps &ret, const Vector4ps &param_0, const Vector4ps &param_1)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());
    __m128 impl_param_1 = _mm_load_ps(param_1.data());

    __m128 m_ret = _mm_pow_ps(impl_param_0, impl_param_1);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_pow_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });
    Vector4ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_pow_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(pow((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],pow((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_pow_pd(Vector2pd &ret, const Vector2pd &param_0, const Vector2pd &param_1)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());
    __m128d impl_param_1 = _mm_load_pd(param_1.data());

    __m128d m_ret = _mm_pow_pd(impl_param_0, impl_param_1);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_pow_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });
    Vector2pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_pow_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(pow((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],pow((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_pow_ps(Vector8ps &ret, const Vector8ps &param_0, const Vector8ps &param_1)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());
    __m256 impl_param_1 = _mm256_load_ps(param_1.data());

    __m256 m_ret = _mm256_pow_ps(impl_param_0, impl_param_1);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_pow_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });
    Vector8ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_pow_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(pow((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],pow((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_pow_pd(Vector4pd &ret, const Vector4pd &param_0, const Vector4pd &param_1)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());
    __m256d impl_param_1 = _mm256_load_pd(param_1.data());

    __m256d m_ret = _mm256_pow_pd(impl_param_0, impl_param_1);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_pow_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });
    Vector4pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_pow_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(pow((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],pow((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_trunc_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_trunc_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_trunc_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_trunc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(trunc((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],trunc((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_trunc_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_trunc_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_trunc_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_trunc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(trunc((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],trunc((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_trunc_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_trunc_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_trunc_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_trunc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(trunc((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],trunc((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_trunc_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_trunc_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_trunc_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_trunc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(trunc((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],trunc((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_floor_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_svml_floor_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_svml_floor_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_svml_floor_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(floor((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],floor((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_floor_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_svml_floor_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_svml_floor_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_svml_floor_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(floor((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],floor((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_floor_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_svml_floor_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_svml_floor_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_svml_floor_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(floor((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],floor((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_floor_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_svml_floor_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_svml_floor_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_svml_floor_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(floor((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],floor((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_ceil_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_svml_ceil_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_svml_ceil_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_svml_ceil_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(ceil((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],ceil((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_ceil_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_svml_ceil_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_svml_ceil_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_svml_ceil_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(ceil((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],ceil((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_ceil_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_svml_ceil_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_svml_ceil_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_svml_ceil_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(ceil((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],ceil((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_ceil_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_svml_ceil_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_svml_ceil_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_svml_ceil_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(ceil((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],ceil((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_round_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_svml_round_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_svml_round_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_svml_round_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(round((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],round((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_round_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_svml_round_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_svml_round_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_svml_round_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(round((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],round((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_round_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_svml_round_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_svml_round_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_svml_round_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(round((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],round((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_round_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_svml_round_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_svml_round_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_svml_round_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(round((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],round((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_fmod_ps(Vector4ps &ret, const Vector4ps &param_0, const Vector4ps &param_1)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());
    __m128 impl_param_1 = _mm_load_ps(param_1.data());

    __m128 m_ret = _mm_fmod_ps(impl_param_0, impl_param_1);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_fmod_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });
    Vector4ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_fmod_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(fmod((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],fmod((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_fmod_pd(Vector2pd &ret, const Vector2pd &param_0, const Vector2pd &param_1)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());
    __m128d impl_param_1 = _mm_load_pd(param_1.data());

    __m128d m_ret = _mm_fmod_pd(impl_param_0, impl_param_1);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_fmod_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });
    Vector2pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_fmod_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(fmod((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],fmod((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_fmod_ps(Vector8ps &ret, const Vector8ps &param_0, const Vector8ps &param_1)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());
    __m256 impl_param_1 = _mm256_load_ps(param_1.data());

    __m256 m_ret = _mm256_fmod_ps(impl_param_0, impl_param_1);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_fmod_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });
    Vector8ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_fmod_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(fmod((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],fmod((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_fmod_pd(Vector4pd &ret, const Vector4pd &param_0, const Vector4pd &param_1)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());
    __m256d impl_param_1 = _mm256_load_pd(param_1.data());

    __m256d m_ret = _mm256_fmod_pd(impl_param_0, impl_param_1);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_fmod_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });
    Vector4pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_fmod_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(fmod((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],fmod((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_sqrt_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_svml_sqrt_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_svml_sqrt_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_svml_sqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sqrt((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sqrt((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_svml_sqrt_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_svml_sqrt_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_svml_sqrt_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_svml_sqrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sqrt((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sqrt((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_sqrt_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_svml_sqrt_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_svml_sqrt_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_svml_sqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sqrt((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],sqrt((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_svml_sqrt_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_svml_sqrt_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_svml_sqrt_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_svml_sqrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(sqrt((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],sqrt((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_invsqrt_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_invsqrt_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_invsqrt_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_invsqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/sqrt((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],1/sqrt((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_invsqrt_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_invsqrt_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_invsqrt_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_invsqrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/sqrt((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],1/sqrt((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_invsqrt_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_invsqrt_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_invsqrt_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_invsqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/sqrt((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],1/sqrt((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_invsqrt_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_invsqrt_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_invsqrt_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_invsqrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/sqrt((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],1/sqrt((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cbrt_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cbrt_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cbrt_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cbrt((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cbrt((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cbrt_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cbrt_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cbrt_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cbrt((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cbrt((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cbrt_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cbrt_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cbrt_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cbrt((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cbrt((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cbrt_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cbrt_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cbrt_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cbrt((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cbrt((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_invcbrt_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_invcbrt_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_invcbrt_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_invcbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/cbrt((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],1/cbrt((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_invcbrt_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_invcbrt_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_invcbrt_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_invcbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/cbrt((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],1/cbrt((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_invcbrt_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_invcbrt_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_invcbrt_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_invcbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/cbrt((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],1/cbrt((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_invcbrt_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_invcbrt_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_invcbrt_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_invcbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(1/cbrt((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],1/cbrt((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_hypot_ps(Vector4ps &ret, const Vector4ps &param_0, const Vector4ps &param_1)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());
    __m128 impl_param_1 = _mm_load_ps(param_1.data());

    __m128 m_ret = _mm_hypot_ps(impl_param_0, impl_param_1);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_hypot_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });
    Vector4ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_hypot_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(hypot((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],hypot((typename Vector4ps::value_type)param_1[i], (typename Vector4ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_hypot_pd(Vector2pd &ret, const Vector2pd &param_0, const Vector2pd &param_1)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());
    __m128d impl_param_1 = _mm_load_pd(param_1.data());

    __m128d m_ret = _mm_hypot_pd(impl_param_0, impl_param_1);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_hypot_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });
    Vector2pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_hypot_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(hypot((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],hypot((typename Vector2pd::value_type)param_1[i], (typename Vector2pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_hypot_ps(Vector8ps &ret, const Vector8ps &param_0, const Vector8ps &param_1)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());
    __m256 impl_param_1 = _mm256_load_ps(param_1.data());

    __m256 m_ret = _mm256_hypot_ps(impl_param_0, impl_param_1);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_hypot_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });
    Vector8ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_hypot_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(hypot((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],hypot((typename Vector8ps::value_type)param_1[i], (typename Vector8ps::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm256_hypot_pd(Vector4pd &ret, const Vector4pd &param_0, const Vector4pd &param_1)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());
    __m256d impl_param_1 = _mm256_load_pd(param_1.data());

    __m256d m_ret = _mm256_hypot_pd(impl_param_0, impl_param_1);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_hypot_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });
    Vector4pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_hypot_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(hypot((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],hypot((typename Vector4pd::value_type)param_1[i], (typename Vector4pd::value_type)param_2[i])) << "Input:"  << ";" <<param_1[i] << ";" <<param_2[i];
        }
    }
}




__declspec(noinline) void helper__mm_cdfnorm_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cdfnorm_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cdfnorm_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cdfnorm_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorm((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cdfnorm_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cdfnorm_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cdfnorm_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cdfnorm_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorm((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cdfnorm_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cdfnorm_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cdfnorm_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cdfnorm_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorm((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cdfnorm_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cdfnorm_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cdfnorm_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cdfnorm_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorm((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cdfnorminv_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cdfnorminv_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cdfnorminv_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cdfnorminv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorminv((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cdfnorminv((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cdfnorminv_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_cdfnorminv_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_cdfnorminv_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_cdfnorminv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorminv((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cdfnorminv((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cdfnorminv_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cdfnorminv_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cdfnorminv_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cdfnorminv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorminv((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],cdfnorminv((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_cdfnorminv_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_cdfnorminv_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_cdfnorminv_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_cdfnorminv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(cdfnorminv((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],cdfnorminv((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_cexp_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_cexp_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_cexp_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_cexp_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = cexp((typename Vector4ps::value_type)param_1[i],(typename Vector4ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm256_cexp_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_cexp_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_cexp_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_cexp_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = cexp((typename Vector8ps::value_type)param_1[i],(typename Vector8ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm_clog_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_clog_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_clog_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_clog_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = clog((typename Vector4ps::value_type)param_1[i],(typename Vector4ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm256_clog_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_clog_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_clog_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_clog_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = clog((typename Vector8ps::value_type)param_1[i],(typename Vector8ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm_csqrt_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_csqrt_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_csqrt_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_csqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = csqrt((typename Vector4ps::value_type)param_1[i],(typename Vector4ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm256_csqrt_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_csqrt_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_csqrt_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_csqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        auto cres = csqrt((typename Vector8ps::value_type)param_1[i],(typename Vector8ps::value_type)param_1[i+1]);
        EXPECT_FLOAT_EQ(Result[i],cres.real);
        EXPECT_FLOAT_EQ(Result[++i],cres.imag);
    }
}




__declspec(noinline) void helper__mm_erf_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_erf_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_erf_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_erf_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erf((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erf((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erf_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_erf_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_erf_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_erf_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erf((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erf_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_erf_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_erf_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_erf_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erf((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erf((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erf_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_erf_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_erf_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_erf_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erf((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfc_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_erfc_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_erfc_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_erfc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfc((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfc_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_erfc_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_erfc_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_erfc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfc((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfc_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_erfc_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_erfc_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_erfc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfc((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfc_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_erfc_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_erfc_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_erfc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfc((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfcinv_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_erfcinv_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_erfcinv_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_erfcinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfcinv((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfcinv((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfcinv_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_erfcinv_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_erfcinv_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_erfcinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfcinv((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfcinv((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfcinv_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_erfcinv_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_erfcinv_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_erfcinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfcinv((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfcinv((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfcinv_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_erfcinv_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_erfcinv_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_erfcinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfcinv((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfcinv((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfinv_ps(Vector4ps &ret, const Vector4ps &param_0)
{
    __m128 impl_param_0 = _mm_load_ps(param_0.data());

    __m128 m_ret = _mm_erfinv_ps(impl_param_0);

    _mm_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128, test_mm_erfinv_ps) {
    Vector4ps Result;
    Vector4ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4ps::value_type)rd_fp(); });

    helper__mm_erfinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfinv((typename Vector4ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfinv((typename Vector4ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm_erfinv_pd(Vector2pd &ret, const Vector2pd &param_0)
{
    __m128d impl_param_0 = _mm_load_pd(param_0.data());

    __m128d m_ret = _mm_erfinv_pd(impl_param_0);

    _mm_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m128d, test_mm_erfinv_pd) {
    Vector2pd Result;
    Vector2pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector2pd::value_type)rd_fp(); });

    helper__mm_erfinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfinv((typename Vector2pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfinv((typename Vector2pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfinv_ps(Vector8ps &ret, const Vector8ps &param_0)
{
    __m256 impl_param_0 = _mm256_load_ps(param_0.data());

    __m256 m_ret = _mm256_erfinv_ps(impl_param_0);

    _mm256_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256, test_mm256_erfinv_ps) {
    Vector8ps Result;
    Vector8ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8ps::value_type)rd_fp(); });

    helper__mm256_erfinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfinv((typename Vector8ps::value_type)param_1[i])));
        else {
            EXPECT_FLOAT_EQ(Result[i],erfinv((typename Vector8ps::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




__declspec(noinline) void helper__mm256_erfinv_pd(Vector4pd &ret, const Vector4pd &param_0)
{
    __m256d impl_param_0 = _mm256_load_pd(param_0.data());

    __m256d m_ret = _mm256_erfinv_pd(impl_param_0);

    _mm256_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m256d, test_mm256_erfinv_pd) {
    Vector4pd Result;
    Vector4pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector4pd::value_type)rd_fp(); });

    helper__mm256_erfinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        if(std::isnan(Result[i]))
            EXPECT_TRUE(std::isnan(erfinv((typename Vector4pd::value_type)param_1[i])));
        else {
            EXPECT_DOUBLE_EQ(Result[i],erfinv((typename Vector4pd::value_type)param_1[i])) << "Input:"  << ";" <<param_1[i];
        }
    }
}




