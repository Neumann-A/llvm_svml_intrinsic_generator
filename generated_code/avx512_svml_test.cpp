#include "../svml_test_definitions.h"

#ifdef __AVX512__

#ifdef __clang__
#include "avx512_svml_intrin.h"

#endif
__declspec(noinline) void helper__mm512_div_epi8(Vector64epi8 &ret, const Vector64epi8 &param_0, const Vector64epi8 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epi8(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epi8) {
    Vector64epi8 Result;
    Vector64epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector64epi8::value_type)mt64(); });
    Vector64epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector64epi8::value_type)mt64(); });

    helper__mm512_div_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector64epi8::value_type)param_1[i], (typename Vector64epi8::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epi16(Vector32epi16 &ret, const Vector32epi16 &param_0, const Vector32epi16 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epi16(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epi16) {
    Vector32epi16 Result;
    Vector32epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epi16::value_type)mt64(); });
    Vector32epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epi16::value_type)mt64(); });

    helper__mm512_div_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector32epi16::value_type)param_1[i], (typename Vector32epi16::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epi32(Vector16epi32 &ret, const Vector16epi32 &param_0, const Vector16epi32 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epi32(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epi32) {
    Vector16epi32 Result;
    Vector16epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    Vector16epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi32::value_type)mt64(); });

    helper__mm512_div_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epi32::value_type)param_1[i], (typename Vector16epi32::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epi64(Vector8epi64 &ret, const Vector8epi64 &param_0, const Vector8epi64 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epi64(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epi64) {
    Vector8epi64 Result;
    Vector8epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi64::value_type)mt64(); });
    Vector8epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi64::value_type)mt64(); });

    helper__mm512_div_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epi64::value_type)param_1[i], (typename Vector8epi64::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epu8(Vector64epu8 &ret, const Vector64epu8 &param_0, const Vector64epu8 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epu8(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epu8) {
    Vector64epu8 Result;
    Vector64epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector64epu8::value_type)mt64(); });
    Vector64epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector64epu8::value_type)mt64(); });

    helper__mm512_div_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector64epu8::value_type)param_1[i], (typename Vector64epu8::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epu16(Vector32epu16 &ret, const Vector32epu16 &param_0, const Vector32epu16 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epu16(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epu16) {
    Vector32epu16 Result;
    Vector32epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epu16::value_type)mt64(); });
    Vector32epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epu16::value_type)mt64(); });

    helper__mm512_div_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector32epu16::value_type)param_1[i], (typename Vector32epu16::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epu32(Vector16epu32 &ret, const Vector16epu32 &param_0, const Vector16epu32 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epu32(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epu32) {
    Vector16epu32 Result;
    Vector16epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    Vector16epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu32::value_type)mt64(); });

    helper__mm512_div_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epu32::value_type)param_1[i], (typename Vector16epu32::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_div_epu64(Vector8epu64 &ret, const Vector8epu64 &param_0, const Vector8epu64 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_div_epu64(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_div_epu64) {
    Vector8epu64 Result;
    Vector8epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu64::value_type)mt64(); });
    Vector8epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu64::value_type)mt64(); });

    helper__mm512_div_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector8epu64::value_type)param_1[i], (typename Vector8epu64::value_type)param_2[i]).quot); 
    }
}




__declspec(noinline) void helper__mm512_mask_div_epi32(Vector16epi32 &ret, const Vector16epi32 &param_0, const std::int16_t  &param_1, const Vector16epi32 &param_2, const Vector16epi32 &param_3)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512i impl_param_2 = *(__m512i*) &param_2;
    __m512i impl_param_3 = *(__m512i*) &param_3;

    __m512i m_ret = _mm512_mask_div_epi32(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_mask_div_epi32) {
    Vector16epi32 Result;
    Vector16epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16epi32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    Vector16epi32 param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16epi32::value_type)mt64(); });

    helper__mm512_mask_div_epi32(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epi32::value_type)param_1[i], param_2 >>  i , (typename Vector16epi32::value_type)param_3[i], (typename Vector16epi32::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_div_epu32(Vector16epu32 &ret, const Vector16epu32 &param_0, const std::int16_t  &param_1, const Vector16epu32 &param_2, const Vector16epu32 &param_3)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512i impl_param_2 = *(__m512i*) &param_2;
    __m512i impl_param_3 = *(__m512i*) &param_3;

    __m512i m_ret = _mm512_mask_div_epu32(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_mask_div_epu32) {
    Vector16epu32 Result;
    Vector16epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16epu32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    Vector16epu32 param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16epu32::value_type)mt64(); });

    helper__mm512_mask_div_epu32(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],div((typename Vector16epu32::value_type)param_1[i], param_2 >>  i , (typename Vector16epu32::value_type)param_3[i], (typename Vector16epu32::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epi8(Vector64epi8 &ret, const Vector64epi8 &param_0, const Vector64epi8 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epi8(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epi8) {
    Vector64epi8 Result;
    Vector64epi8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector64epi8::value_type)mt64(); });
    Vector64epi8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector64epi8::value_type)mt64(); });

    helper__mm512_rem_epi8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector64epi8::value_type)param_1[i], (typename Vector64epi8::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epi16(Vector32epi16 &ret, const Vector32epi16 &param_0, const Vector32epi16 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epi16(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epi16) {
    Vector32epi16 Result;
    Vector32epi16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epi16::value_type)mt64(); });
    Vector32epi16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epi16::value_type)mt64(); });

    helper__mm512_rem_epi16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector32epi16::value_type)param_1[i], (typename Vector32epi16::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epi32(Vector16epi32 &ret, const Vector16epi32 &param_0, const Vector16epi32 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epi32(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epi32) {
    Vector16epi32 Result;
    Vector16epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    Vector16epi32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epi32::value_type)mt64(); });

    helper__mm512_rem_epi32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epi32::value_type)param_1[i], (typename Vector16epi32::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epi64(Vector8epi64 &ret, const Vector8epi64 &param_0, const Vector8epi64 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epi64(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epi64) {
    Vector8epi64 Result;
    Vector8epi64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epi64::value_type)mt64(); });
    Vector8epi64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epi64::value_type)mt64(); });

    helper__mm512_rem_epi64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epi64::value_type)param_1[i], (typename Vector8epi64::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epu8(Vector64epu8 &ret, const Vector64epu8 &param_0, const Vector64epu8 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epu8(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epu8) {
    Vector64epu8 Result;
    Vector64epu8 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector64epu8::value_type)mt64(); });
    Vector64epu8 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector64epu8::value_type)mt64(); });

    helper__mm512_rem_epu8(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector64epu8::value_type)param_1[i], (typename Vector64epu8::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epu16(Vector32epu16 &ret, const Vector32epu16 &param_0, const Vector32epu16 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epu16(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epu16) {
    Vector32epu16 Result;
    Vector32epu16 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector32epu16::value_type)mt64(); });
    Vector32epu16 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector32epu16::value_type)mt64(); });

    helper__mm512_rem_epu16(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector32epu16::value_type)param_1[i], (typename Vector32epu16::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epu32(Vector16epu32 &ret, const Vector16epu32 &param_0, const Vector16epu32 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epu32(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epu32) {
    Vector16epu32 Result;
    Vector16epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    Vector16epu32 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16epu32::value_type)mt64(); });

    helper__mm512_rem_epu32(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epu32::value_type)param_1[i], (typename Vector16epu32::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_rem_epu64(Vector8epu64 &ret, const Vector8epu64 &param_0, const Vector8epu64 &param_1)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __m512i impl_param_1 = *(__m512i*) &param_1;

    __m512i m_ret = _mm512_rem_epu64(impl_param_0, impl_param_1);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_rem_epu64) {
    Vector8epu64 Result;
    Vector8epu64 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8epu64::value_type)mt64(); });
    Vector8epu64 param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8epu64::value_type)mt64(); });

    helper__mm512_rem_epu64(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector8epu64::value_type)param_1[i], (typename Vector8epu64::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_rem_epi32(Vector16epi32 &ret, const Vector16epi32 &param_0, const std::int16_t  &param_1, const Vector16epi32 &param_2, const Vector16epi32 &param_3)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512i impl_param_2 = *(__m512i*) &param_2;
    __m512i impl_param_3 = *(__m512i*) &param_3;

    __m512i m_ret = _mm512_mask_rem_epi32(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_mask_rem_epi32) {
    Vector16epi32 Result;
    Vector16epi32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16epi32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16epi32::value_type)mt64(); });
    Vector16epi32 param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16epi32::value_type)mt64(); });

    helper__mm512_mask_rem_epi32(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epi32::value_type)param_1[i], param_2 >>  i , (typename Vector16epi32::value_type)param_3[i], (typename Vector16epi32::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_rem_epu32(Vector16epu32 &ret, const Vector16epu32 &param_0, const std::int16_t  &param_1, const Vector16epu32 &param_2, const Vector16epu32 &param_3)
{
    __m512i impl_param_0 = *(__m512i*) &param_0;
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512i impl_param_2 = *(__m512i*) &param_2;
    __m512i impl_param_3 = *(__m512i*) &param_3;

    __m512i m_ret = _mm512_mask_rem_epu32(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    *ret.data() =  *(std::decay_t<decltype(ret)>::value_type*)&m_ret;

}

TEST(SVML_intrinsics__m512i, test_mm512_mask_rem_epu32) {
    Vector16epu32 Result;
    Vector16epu32 param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16epu32 param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16epu32::value_type)mt64(); });
    Vector16epu32 param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16epu32::value_type)mt64(); });

    helper__mm512_mask_rem_epu32(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_EQ(Result[i],rem((typename Vector16epu32::value_type)param_1[i], param_2 >>  i , (typename Vector16epu32::value_type)param_3[i], (typename Vector16epu32::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_sin_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_sin_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_sin_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_sin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sin((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sin_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_sin_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_sin_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_sin_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sin((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_sin_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_sin_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_sin_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_sin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sin((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sin_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_sin_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_sin_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_sin_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sin((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cos_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cos_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cos((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cos_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cos_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cos_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cos((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cos_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cos_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cos((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cos_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cos_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cos_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cos((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_sincos_ps(Vector16ps &ret, Vector16ps &param_0, const Vector16ps &param_1)
{
    __m512 impl_param_0;
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());

    __m512 m_ret = _mm512_sincos_ps(&impl_param_0, impl_param_1);

    _mm512_store_ps(ret.data(), m_ret);
    _mm512_store_ps(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m512, test_mm512_sincos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_sincos_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sincos((typename Vector16ps::value_type)param_2[i])); 
        EXPECT_FLOAT_EQ(param_1[i],sincos1((typename Vector16ps::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sincos_ps(Vector16ps &ret, Vector16ps &param_0, const Vector16ps &param_1, const Vector16ps &param_2, const std::int16_t  &param_3, const Vector16ps &param_4)
{
    __m512 impl_param_0;
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());
    __mmask16 impl_param_3 = ((__mmask16)(param_3));
    __m512 impl_param_4 = _mm512_load_ps(param_4.data());

    __m512 m_ret = _mm512_mask_sincos_ps(&impl_param_0, impl_param_1, impl_param_2, impl_param_3, impl_param_4);

    _mm512_store_ps(ret.data(), m_ret);
    _mm512_store_ps(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_sincos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_4;
    param_4 = (std::int16_t) mt64();
    Vector16ps param_5;
    std::generate(param_5.begin(),param_5.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_sincos_ps(Result, param_1, param_2, param_3, param_4, param_5);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sincos((typename Vector16ps::value_type)param_2[i], (typename Vector16ps::value_type)param_3[i], param_4 >>  i , (typename Vector16ps::value_type)param_5[i])); 
        EXPECT_FLOAT_EQ(param_1[i],sincos1((typename Vector16ps::value_type)param_2[i], (typename Vector16ps::value_type)param_3[i], param_4 >>  i , (typename Vector16ps::value_type)param_5[i])); 
    }
}




__declspec(noinline) void helper__mm512_sincos_pd(Vector8pd &ret, Vector8pd &param_0, const Vector8pd &param_1)
{
    __m512d impl_param_0;
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());

    __m512d m_ret = _mm512_sincos_pd(&impl_param_0, impl_param_1);

    _mm512_store_pd(ret.data(), m_ret);
    _mm512_store_pd(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m512d, test_mm512_sincos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_sincos_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sincos((typename Vector8pd::value_type)param_2[i])); 
        EXPECT_DOUBLE_EQ(param_1[i],sincos1((typename Vector8pd::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sincos_pd(Vector8pd &ret, Vector8pd &param_0, const Vector8pd &param_1, const Vector8pd &param_2, const std::int8_t  &param_3, const Vector8pd &param_4)
{
    __m512d impl_param_0;
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());
    __mmask8 impl_param_3 = ((__mmask8)(param_3));
    __m512d impl_param_4 = _mm512_load_pd(param_4.data());

    __m512d m_ret = _mm512_mask_sincos_pd(&impl_param_0, impl_param_1, impl_param_2, impl_param_3, impl_param_4);

    _mm512_store_pd(ret.data(), m_ret);
    _mm512_store_pd(param_0.data(), impl_param_0);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_sincos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_4;
    param_4 = (std::int8_t) mt64();
    Vector8pd param_5;
    std::generate(param_5.begin(),param_5.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_sincos_pd(Result, param_1, param_2, param_3, param_4, param_5);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sincos((typename Vector8pd::value_type)param_2[i], (typename Vector8pd::value_type)param_3[i], param_4 >>  i , (typename Vector8pd::value_type)param_5[i])); 
        EXPECT_DOUBLE_EQ(param_1[i],sincos1((typename Vector8pd::value_type)param_2[i], (typename Vector8pd::value_type)param_3[i], param_4 >>  i , (typename Vector8pd::value_type)param_5[i])); 
    }
}




__declspec(noinline) void helper__mm512_tan_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_tan_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_tan_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_tan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tan((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tan_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_tan_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_tan_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_tan_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tan((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_tan_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_tan_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_tan_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_tan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tan((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tan_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_tan_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_tan_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_tan_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tan((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_asin_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_asin_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_asin_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_asin_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],asin((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_asin_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_asin_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_asin_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_asin_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],asin((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_asin_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_asin_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_asin_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_asin_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],asin((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_asin_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_asin_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_asin_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_asin_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],asin((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_acos_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_acos_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_acos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_acos_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],acos((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_acos_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_acos_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_acos_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_acos_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],acos((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_acos_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_acos_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_acos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_acos_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],acos((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_acos_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_acos_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_acos_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_acos_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],acos((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_atan_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_atan_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_atan_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_atan_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atan((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atan_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_atan_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_atan_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_atan_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atan((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_atan_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_atan_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_atan_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_atan_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atan((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atan_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_atan_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_atan_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_atan_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atan((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_atan2_ps(Vector16ps &ret, const Vector16ps &param_0, const Vector16ps &param_1)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());

    __m512 m_ret = _mm512_atan2_ps(impl_param_0, impl_param_1);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_atan2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_atan2_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atan2((typename Vector16ps::value_type)param_1[i], (typename Vector16ps::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atan2_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2, const Vector16ps &param_3)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());
    __m512 impl_param_3 = _mm512_load_ps(param_3.data());

    __m512 m_ret = _mm512_mask_atan2_ps(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_atan2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_atan2_ps(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atan2((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i], (typename Vector16ps::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_atan2_pd(Vector8pd &ret, const Vector8pd &param_0, const Vector8pd &param_1)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());

    __m512d m_ret = _mm512_atan2_pd(impl_param_0, impl_param_1);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_atan2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_atan2_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atan2((typename Vector8pd::value_type)param_1[i], (typename Vector8pd::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atan2_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2, const Vector8pd &param_3)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());
    __m512d impl_param_3 = _mm512_load_pd(param_3.data());

    __m512d m_ret = _mm512_mask_atan2_pd(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_atan2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_atan2_pd(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atan2((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i], (typename Vector8pd::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_sind_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_sind_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_sind_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_sind_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sind((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sind_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_sind_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_sind_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_sind_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sind((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_sind_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_sind_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_sind_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_sind_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sind((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sind_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_sind_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_sind_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_sind_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sind((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cosd_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cosd_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cosd_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cosd_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cosd((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cosd_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cosd_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cosd_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cosd_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cosd((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cosd_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cosd_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cosd_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cosd_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cosd((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cosd_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cosd_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cosd_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cosd_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cosd((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_tand_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_tand_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_tand_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_tand_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tand((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tand_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_tand_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_tand_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_tand_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tand((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_tand_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_tand_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_tand_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_tand_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tand((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tand_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_tand_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_tand_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_tand_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tand((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_sinh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_sinh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_sinh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_sinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sinh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sinh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_sinh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_sinh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_sinh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],sinh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_sinh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_sinh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_sinh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_sinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sinh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_sinh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_sinh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_sinh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_sinh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],sinh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cosh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cosh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cosh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cosh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cosh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cosh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cosh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cosh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cosh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cosh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cosh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cosh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cosh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cosh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cosh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cosh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cosh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cosh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_tanh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_tanh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_tanh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_tanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tanh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tanh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_tanh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_tanh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_tanh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],tanh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_tanh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_tanh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_tanh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_tanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tanh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_tanh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_tanh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_tanh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_tanh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],tanh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_asinh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_asinh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_asinh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_asinh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],asinh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_asinh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_asinh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_asinh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_asinh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],asinh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_asinh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_asinh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_asinh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_asinh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],asinh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_asinh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_asinh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_asinh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_asinh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],asinh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_acosh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_acosh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_acosh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_acosh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],acosh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_acosh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_acosh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_acosh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_acosh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],acosh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_acosh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_acosh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_acosh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_acosh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],acosh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_acosh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_acosh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_acosh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_acosh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],acosh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_atanh_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_atanh_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_atanh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_atanh_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atanh((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atanh_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_atanh_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_atanh_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_atanh_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],atanh((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_atanh_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_atanh_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_atanh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_atanh_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atanh((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_atanh_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_atanh_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_atanh_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_atanh_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],atanh((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_log_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_log_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_log_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_log_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_log_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_log_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_log_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_log_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_log_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_log_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_log_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_log_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log1p_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_log1p_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_log1p_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_log1p_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log1p((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log1p_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_log1p_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_log1p_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_log1p_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log1p((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log1p_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_log1p_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_log1p_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_log1p_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log1p((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log1p_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_log1p_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_log1p_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_log1p_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log1p((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log10_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_log10_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_log10_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_log10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log10((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log10_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_log10_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_log10_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_log10_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log10((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log10_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_log10_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_log10_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_log10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log10((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log10_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_log10_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_log10_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_log10_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log10((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log2_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_log2_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_log2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_log2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log2((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log2_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_log2_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_log2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_log2_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],log2((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_log2_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_log2_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_log2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_log2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log2((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_log2_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_log2_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_log2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_log2_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],log2((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_logb_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_logb_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_logb_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_logb_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],logb((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_logb_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_logb_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_logb_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_logb_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],logb((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_logb_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_logb_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_logb_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_logb_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],logb((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_logb_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_logb_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_logb_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_logb_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],logb((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_exp_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_exp_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_exp_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_exp_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_exp_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_exp_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_exp_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_exp_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_exp_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_exp_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_exp_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_exp_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp10_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_exp10_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_exp10_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_exp10_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp10((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp10_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_exp10_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_exp10_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_exp10_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp10((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp10_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_exp10_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_exp10_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_exp10_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp10((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp10_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_exp10_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_exp10_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_exp10_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp10((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp2_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_exp2_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_exp2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_exp2_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp2((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp2_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_exp2_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_exp2_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_exp2_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],exp2((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_exp2_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_exp2_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_exp2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_exp2_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp2((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_exp2_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_exp2_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_exp2_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_exp2_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],exp2((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_expm1_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_expm1_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_expm1_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_expm1_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],expm1((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_expm1_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_expm1_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_expm1_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_expm1_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],expm1((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_expm1_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_expm1_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_expm1_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_expm1_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],expm1((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_expm1_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_expm1_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_expm1_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_expm1_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],expm1((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_pow_ps(Vector16ps &ret, const Vector16ps &param_0, const Vector16ps &param_1)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());

    __m512 m_ret = _mm512_pow_ps(impl_param_0, impl_param_1);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_pow_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_pow_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],pow((typename Vector16ps::value_type)param_1[i], (typename Vector16ps::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_pow_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2, const Vector16ps &param_3)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());
    __m512 impl_param_3 = _mm512_load_ps(param_3.data());

    __m512 m_ret = _mm512_mask_pow_ps(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_pow_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_pow_ps(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],pow((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i], (typename Vector16ps::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_pow_pd(Vector8pd &ret, const Vector8pd &param_0, const Vector8pd &param_1)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());

    __m512d m_ret = _mm512_pow_pd(impl_param_0, impl_param_1);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_pow_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_pow_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],pow((typename Vector8pd::value_type)param_1[i], (typename Vector8pd::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_pow_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2, const Vector8pd &param_3)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());
    __m512d impl_param_3 = _mm512_load_pd(param_3.data());

    __m512d m_ret = _mm512_mask_pow_pd(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_pow_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_pow_pd(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],pow((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i], (typename Vector8pd::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_trunc_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_trunc_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_trunc_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_trunc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],trunc((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_trunc_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_trunc_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_trunc_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_trunc_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],trunc((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_trunc_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_trunc_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_trunc_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_trunc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],trunc((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_trunc_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_trunc_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_trunc_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_trunc_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],trunc((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_floor_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_floor_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_floor_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_floor_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],floor((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_floor_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_floor_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_floor_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_floor_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],floor((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_floor_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_floor_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_floor_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_floor_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],floor((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_floor_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_floor_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_floor_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_floor_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],floor((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_ceil_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_ceil_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_ceil_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_ceil_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],ceil((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_ceil_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_ceil_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_ceil_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_ceil_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],ceil((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_ceil_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_ceil_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_ceil_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_ceil_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],ceil((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_ceil_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_ceil_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_ceil_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_ceil_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],ceil((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_svml_round_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_svml_round_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_svml_round_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_svml_round_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],round((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_svml_round_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_svml_round_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_svml_round_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_svml_round_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],round((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_svml_round_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_svml_round_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_svml_round_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_svml_round_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],round((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_svml_round_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_svml_round_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_svml_round_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_svml_round_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],round((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_fmod_ps(Vector16ps &ret, const Vector16ps &param_0, const Vector16ps &param_1)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());

    __m512 m_ret = _mm512_fmod_ps(impl_param_0, impl_param_1);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_fmod_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_fmod_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],fmod((typename Vector16ps::value_type)param_1[i], (typename Vector16ps::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_fmod_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2, const Vector16ps &param_3)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());
    __m512 impl_param_3 = _mm512_load_ps(param_3.data());

    __m512 m_ret = _mm512_mask_fmod_ps(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_fmod_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_fmod_ps(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],fmod((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i], (typename Vector16ps::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_fmod_pd(Vector8pd &ret, const Vector8pd &param_0, const Vector8pd &param_1)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());

    __m512d m_ret = _mm512_fmod_pd(impl_param_0, impl_param_1);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_fmod_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_fmod_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],fmod((typename Vector8pd::value_type)param_1[i], (typename Vector8pd::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_fmod_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2, const Vector8pd &param_3)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());
    __m512d impl_param_3 = _mm512_load_pd(param_3.data());

    __m512d m_ret = _mm512_mask_fmod_pd(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_fmod_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_fmod_pd(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],fmod((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i], (typename Vector8pd::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_rint_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_rint_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_rint_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_rint_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],rint((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_rint_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_rint_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_rint_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_rint_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],rint((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_rint_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_rint_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_rint_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_rint_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],rint((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_rint_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_rint_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_rint_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_rint_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],rint((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_invsqrt_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_invsqrt_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_invsqrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_invsqrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],1/sqrt((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_invsqrt_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_invsqrt_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_invsqrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_invsqrt_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],1/sqrt((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_invsqrt_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_invsqrt_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_invsqrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_invsqrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],1/sqrt((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_invsqrt_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_invsqrt_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_invsqrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_invsqrt_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],1/sqrt((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cbrt_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cbrt_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cbrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cbrt((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cbrt_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cbrt_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cbrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cbrt_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cbrt((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cbrt_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cbrt_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cbrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cbrt((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cbrt_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cbrt_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cbrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cbrt_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cbrt((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_invcbrt_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_invcbrt_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_invcbrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_invcbrt_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],1/cbrt((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_invcbrt_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_invcbrt_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_invcbrt_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_invcbrt_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],1/cbrt((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_invcbrt_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_invcbrt_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_invcbrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_invcbrt_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],1/cbrt((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_invcbrt_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_invcbrt_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_invcbrt_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_invcbrt_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],1/cbrt((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_hypot_ps(Vector16ps &ret, const Vector16ps &param_0, const Vector16ps &param_1)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __m512 impl_param_1 = _mm512_load_ps(param_1.data());

    __m512 m_ret = _mm512_hypot_ps(impl_param_0, impl_param_1);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_hypot_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_hypot_ps(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],hypot((typename Vector16ps::value_type)param_1[i], (typename Vector16ps::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_hypot_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2, const Vector16ps &param_3)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());
    __m512 impl_param_3 = _mm512_load_ps(param_3.data());

    __m512 m_ret = _mm512_mask_hypot_ps(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_hypot_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    Vector16ps param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_hypot_ps(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],hypot((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i], (typename Vector16ps::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_hypot_pd(Vector8pd &ret, const Vector8pd &param_0, const Vector8pd &param_1)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __m512d impl_param_1 = _mm512_load_pd(param_1.data());

    __m512d m_ret = _mm512_hypot_pd(impl_param_0, impl_param_1);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_hypot_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_2;
    std::generate(param_2.begin(),param_2.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_hypot_pd(Result, param_1, param_2);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],hypot((typename Vector8pd::value_type)param_1[i], (typename Vector8pd::value_type)param_2[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_hypot_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2, const Vector8pd &param_3)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());
    __m512d impl_param_3 = _mm512_load_pd(param_3.data());

    __m512d m_ret = _mm512_mask_hypot_pd(impl_param_0, impl_param_1, impl_param_2, impl_param_3);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_hypot_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    Vector8pd param_4;
    std::generate(param_4.begin(),param_4.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_hypot_pd(Result, param_1, param_2, param_3, param_4);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],hypot((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i], (typename Vector8pd::value_type)param_4[i])); 
    }
}




__declspec(noinline) void helper__mm512_cdfnorm_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cdfnorm_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cdfnorm_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cdfnorm_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cdfnorm_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cdfnorm_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cdfnorm_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cdfnorm_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cdfnorm_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cdfnorm_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cdfnorm_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cdfnorm_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cdfnorm_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cdfnorm_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cdfnorm_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cdfnorm_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cdfnorminv_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_cdfnorminv_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_cdfnorminv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_cdfnorminv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cdfnorminv_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_cdfnorminv_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_cdfnorminv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_cdfnorminv_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],cdfnorm((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_cdfnorminv_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_cdfnorminv_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_cdfnorminv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_cdfnorminv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_cdfnorminv_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_cdfnorminv_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_cdfnorminv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_cdfnorminv_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],cdfnorm((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erf_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_erf_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_erf_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_erf_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erf((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erf_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_erf_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_erf_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_erf_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erf((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erf_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_erf_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_erf_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_erf_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erf_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_erf_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_erf_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_erf_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfc_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_erfc_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_erfc_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_erfc_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfc_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_erfc_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_erfc_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_erfc_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfc_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_erfc_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_erfc_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_erfc_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfc_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_erfc_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_erfc_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_erfc_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfcinv_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_erfcinv_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_erfcinv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_erfcinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfcinv_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_erfcinv_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_erfcinv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_erfcinv_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erfc((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfcinv_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_erfcinv_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_erfcinv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_erfcinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfcinv_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_erfcinv_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_erfcinv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_erfcinv_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erfc((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfinv_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_erfinv_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_erfinv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_erfinv_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erf((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfinv_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_erfinv_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_erfinv_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_erfinv_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],erf((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_erfinv_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_erfinv_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_erfinv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_erfinv_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_erfinv_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_erfinv_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_erfinv_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_erfinv_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],erf((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_nearbyint_ps(Vector16ps &ret, const Vector16ps &param_0)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());

    __m512 m_ret = _mm512_nearbyint_ps(impl_param_0);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_nearbyint_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_nearbyint_ps(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],nearbyint((typename Vector16ps::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_nearbyint_ps(Vector16ps &ret, const Vector16ps &param_0, const std::int16_t  &param_1, const Vector16ps &param_2)
{
    __m512 impl_param_0 = _mm512_load_ps(param_0.data());
    __mmask16 impl_param_1 = ((__mmask16)(param_1));
    __m512 impl_param_2 = _mm512_load_ps(param_2.data());

    __m512 m_ret = _mm512_mask_nearbyint_ps(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_ps(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512, test_mm512_mask_nearbyint_ps) {
    Vector16ps Result;
    Vector16ps param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });
    std::int16_t  param_2;
    param_2 = (std::int16_t) mt64();
    Vector16ps param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector16ps::value_type)rd_fp(); });

    helper__mm512_mask_nearbyint_ps(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_FLOAT_EQ(Result[i],nearbyint((typename Vector16ps::value_type)param_1[i], param_2 >>  i , (typename Vector16ps::value_type)param_3[i])); 
    }
}




__declspec(noinline) void helper__mm512_nearbyint_pd(Vector8pd &ret, const Vector8pd &param_0)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());

    __m512d m_ret = _mm512_nearbyint_pd(impl_param_0);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_nearbyint_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_nearbyint_pd(Result, param_1);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],nearbyint((typename Vector8pd::value_type)param_1[i])); 
    }
}




__declspec(noinline) void helper__mm512_mask_nearbyint_pd(Vector8pd &ret, const Vector8pd &param_0, const std::int8_t  &param_1, const Vector8pd &param_2)
{
    __m512d impl_param_0 = _mm512_load_pd(param_0.data());
    __mmask8 impl_param_1 = ((__mmask8)(param_1));
    __m512d impl_param_2 = _mm512_load_pd(param_2.data());

    __m512d m_ret = _mm512_mask_nearbyint_pd(impl_param_0, impl_param_1, impl_param_2);

    _mm512_store_pd(ret.data(), m_ret);

}

TEST(SVML_intrinsics__m512d, test_mm512_mask_nearbyint_pd) {
    Vector8pd Result;
    Vector8pd param_1;
    std::generate(param_1.begin(),param_1.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });
    std::int8_t  param_2;
    param_2 = (std::int8_t) mt64();
    Vector8pd param_3;
    std::generate(param_3.begin(),param_3.end(), []() { return (typename Vector8pd::value_type)rd_fp(); });

    helper__mm512_mask_nearbyint_pd(Result, param_1, param_2, param_3);

    for(int i = 0; i < Result.size(); i++) {
        EXPECT_DOUBLE_EQ(Result[i],nearbyint((typename Vector8pd::value_type)param_1[i], param_2 >>  i , (typename Vector8pd::value_type)param_3[i])); 
    }
}




#endif
