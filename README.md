# Microsoft SVML intrinsics for clang-cl

The code within this repository generates the mapping from intel svml intrinsics to the corresponding `__vdecl_*` symbols found in the c libraries of newer visual studio version (>2019)

The required code to use the intrinsics is in generated_code/avx_svml_intrin.h and generated_code/avx512_svml_intrin.h

__About the tests__
Some tests fail due to numerical accuarcy (namly the intrinsics ending with inv)
AVX512 is not yet tested. Especially the masked versions might generated a bit worse code than VS2019 due to a possible extra unmasked load/store before/after the masked load/store.