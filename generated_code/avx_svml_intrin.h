#include "../svml_prolog.h"

__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epi8(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i8div16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epi16(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i16div8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epi32(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i32div4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epi64(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i64div2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epu8(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u8div16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epu16(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u16div8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epu32(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u32div4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_div_epu64(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u64div2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epi8(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i8rem16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epi16(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i16rem8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epi32(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i32rem4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epi64(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_i64rem2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epu8(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u8rem16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epu16(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u16rem8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epu32(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u32rem4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_rem_epu64(__m128i param0, __m128i param1) 
{ 
    register __m128i reg0 asm("xmm0") = param0;
    register __m128i reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_u64rem2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epi8(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i8div32 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epi16(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i16div16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epi32(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i32div8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epi64(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i64div4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epu8(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u8div32 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epu16(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u16div16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epu32(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u32div8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_div_epu64(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u64div4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epi8(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i8rem32 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epi16(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i16rem16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epi32(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i32rem8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epi64(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_i64rem4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epu8(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u8rem32 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epu16(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u16rem16 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epu32(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u32rem8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_rem_epu64(__m256i param0, __m256i param1) 
{ 
    register __m256i reg0 asm("ymm0") = param0;
    register __m256i reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_u64rem4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_divrem_epi32(__m128i * param0, __m128i param1, __m128i param2) 
{ 
    register __m128i reg0 asm("xmm0") = param1;
    register __m128i reg1 asm("xmm1") = param2;
    asm( 
         "call __vdecl_i32divrem4 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0), "1" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m128i __DEFAULT_SVML_FN_ATTRS128
    _mm_divrem_epu32(__m128i * param0, __m128i param1, __m128i param2) 
{ 
    register __m128i reg0 asm("xmm0") = param1;
    register __m128i reg1 asm("xmm1") = param2;
    asm( 
         "call __vdecl_u32divrem4 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0), "1" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_divrem_epi32(__m256i * param0, __m256i param1, __m256i param2) 
{ 
    register __m256i reg0 asm("ymm0") = param1;
    register __m256i reg1 asm("ymm1") = param2;
    asm( 
         "call __vdecl_i32divrem8 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0), "1" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m256i __DEFAULT_SVML_FN_ATTRS256
    _mm256_divrem_epu32(__m256i * param0, __m256i param1, __m256i param2) 
{ 
    register __m256i reg0 asm("ymm0") = param1;
    register __m256i reg1 asm("ymm1") = param2;
    asm( 
         "call __vdecl_u32divrem8 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0), "1" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_sin_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sinf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_sin_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sin2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_sin_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sinf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_sin_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sin4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cos_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cosf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cos_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cos2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cos_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cosf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cos_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cos4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_sincos_ps(__m128 * param0, __m128 param1) 
{ 
    register __m128 reg0 asm("xmm0") = param1;
    register __m128 reg1 asm("xmm1");
    asm( 
         "call __vdecl_sincosf4 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_sincos_pd(__m128d * param0, __m128d param1) 
{ 
    register __m128d reg0 asm("xmm0") = param1;
    register __m128d reg1 asm("xmm1");
    asm( 
         "call __vdecl_sincos2 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_sincos_ps(__m256 * param0, __m256 param1) 
{ 
    register __m256 reg0 asm("ymm0") = param1;
    register __m256 reg1 asm("ymm1");
    asm( 
         "call __vdecl_sincosf8 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_sincos_pd(__m256d * param0, __m256d param1) 
{ 
    register __m256d reg0 asm("ymm0") = param1;
    register __m256d reg1 asm("ymm1");
    asm( 
         "call __vdecl_sincos4 \t\n" 
        : "=v" (reg0), "=v" (reg1)
        : "0" (reg0)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    *param0 = reg1;
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_tan_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tanf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_tan_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tan2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_tan_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tanf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_tan_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tan4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_asin_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_asinf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_asin_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_asin2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_asin_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_asinf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_asin_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_asin4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_acos_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_acosf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_acos_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_acos2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_acos_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_acosf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_acos_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_acos4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_atan_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_atanf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_atan_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_atan2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_atan_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_atanf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_atan_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_atan4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_atan2_ps(__m128 param0, __m128 param1) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    register __m128 reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_atan2f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_atan2_pd(__m128d param0, __m128d param1) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    register __m128d reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_atan22 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_atan2_ps(__m256 param0, __m256 param1) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    register __m256 reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_atan2f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_atan2_pd(__m256d param0, __m256d param1) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    register __m256d reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_atan24 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_sind_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sindf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_sind_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sind2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_sind_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sindf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_sind_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sind4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cosd_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cosdf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cosd_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cosd2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cosd_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cosdf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cosd_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cosd4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_tand_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tandf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_tand_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tand2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_tand_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tandf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_tand_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tand4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_sinh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sinhf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_sinh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sinh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_sinh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sinhf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_sinh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sinh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cosh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_coshf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cosh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cosh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cosh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_coshf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cosh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cosh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_tanh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tanhf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_tanh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_tanh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_tanh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tanhf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_tanh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_tanh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_asinh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_asinhf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_asinh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_asinh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_asinh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_asinhf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_asinh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_asinh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_acosh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_acoshf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_acosh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_acosh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_acosh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_acoshf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_acosh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_acosh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_atanh_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_atanhf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_atanh_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_atanh2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_atanh_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_atanhf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_atanh_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_atanh4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_log_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_logf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_log_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_log_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_logf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_log_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_log1p_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log1pf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_log1p_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log1p2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_log1p_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log1pf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_log1p_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log1p4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_log10_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log10f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_log10_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log102 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_log10_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log10f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_log10_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log104 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_log2_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log2f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_log2_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_log22 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_log2_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log2f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_log2_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_log24 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_logb_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_logbf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_logb_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_logb2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_logb_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_logbf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_logb_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_logb4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_exp_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_expf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_exp_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_exp2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_expf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_exp4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_exp10_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_exp10f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_exp10_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_exp102 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp10_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_exp10f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp10_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_exp104 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_exp2_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_exp2f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_exp2_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_exp22 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp2_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_exp2f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_exp2_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_exp24 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_expm1_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_expm1f4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_expm1_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_expm12 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_expm1_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_expm1f8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_expm1_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_expm14 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_pow_ps(__m128 param0, __m128 param1) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    register __m128 reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_powf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_pow_pd(__m128d param0, __m128d param1) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    register __m128d reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_pow2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_pow_ps(__m256 param0, __m256 param1) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    register __m256 reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_powf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_pow_pd(__m256d param0, __m256d param1) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    register __m256d reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_pow4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_trunc_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_truncf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_trunc_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_trunc2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_trunc_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_truncf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_trunc_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_trunc4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_floor_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_floorf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_floor_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_floor2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_floor_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_floorf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_floor_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_floor4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_ceil_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_ceilf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_ceil_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_ceil2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_ceil_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_ceilf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_ceil_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_ceil4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_round_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_roundf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_round_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_round2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_round_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_roundf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_round_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_round4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_fmod_ps(__m128 param0, __m128 param1) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    register __m128 reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_fmodf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_fmod_pd(__m128d param0, __m128d param1) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    register __m128d reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_fmod2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_fmod_ps(__m256 param0, __m256 param1) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    register __m256 reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_fmodf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_fmod_pd(__m256d param0, __m256d param1) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    register __m256d reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_fmod4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_sqrt_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sqrtf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_svml_sqrt_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_sqrt2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_sqrt_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sqrtf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_svml_sqrt_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_sqrt4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_invsqrt_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_invsqrtf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_invsqrt_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_invsqrt2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_invsqrt_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_invsqrtf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_invsqrt_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_invsqrt4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cbrt_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cbrtf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cbrt_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cbrt2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cbrt_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cbrtf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cbrt_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cbrt4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_invcbrt_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_invcbrtf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_invcbrt_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_invcbrt2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_invcbrt_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_invcbrtf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_invcbrt_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_invcbrt4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_hypot_ps(__m128 param0, __m128 param1) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    register __m128 reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_hypotf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_hypot_pd(__m128d param0, __m128d param1) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    register __m128d reg1 asm("xmm1") = param1;
    asm( 
         "call __vdecl_hypot2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_hypot_ps(__m256 param0, __m256 param1) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    register __m256 reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_hypotf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_hypot_pd(__m256d param0, __m256d param1) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    register __m256d reg1 asm("ymm1") = param1;
    asm( 
         "call __vdecl_hypot4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0), "v" (reg1)
        : "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cdfnorm_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cdfnormf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cdfnorm_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cdfnorm2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cdfnorm_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cdfnormf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cdfnorm_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cdfnorm4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cdfnorminv_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cdfnorminvf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_cdfnorminv_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cdfnorminv2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cdfnorminv_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cdfnorminvf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_cdfnorminv_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cdfnorminv4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_cexp_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_cexpf2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_cexp_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_cexpf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_clog_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_clogf2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_clog_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_clogf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_csqrt_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_csqrtf2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_csqrt_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_csqrtf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_erf_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erff4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_erf_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erf2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_erf_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erff8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_erf_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_erfc_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfcf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_erfc_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfc2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfc_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfcf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfc_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfc4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_erfcinv_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfcinvf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_erfcinv_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfcinv2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfcinv_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfcinvf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfcinv_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfcinv4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128 __DEFAULT_SVML_FN_ATTRS128
    _mm_erfinv_ps(__m128 param0) 
{ 
    register __m128 reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfinvf4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m128d __DEFAULT_SVML_FN_ATTRS128
    _mm_erfinv_pd(__m128d param0) 
{ 
    register __m128d reg0 asm("xmm0") = param0;
    asm( 
         "call __vdecl_erfinv2 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256 __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfinv_ps(__m256 param0) 
{ 
    register __m256 reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfinvf8 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


__SVML_INTRIN_PROLOG __m256d __DEFAULT_SVML_FN_ATTRS256
    _mm256_erfinv_pd(__m256d param0) 
{ 
    register __m256d reg0 asm("ymm0") = param0;
    asm( 
         "call __vdecl_erfinv4 \t\n" 
        : "=v" (reg0)
        : "0" (reg0)
        : "%ymm1", "%ymm2", "%ymm3", "%ymm4", "%ymm5", "%rax", "%rcx", "%rdx", "%r8", "%r9", "%r10", "%r11"
        );
    return reg0;
}


