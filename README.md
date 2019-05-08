# Microsoft SVML intrinsics for clang-cl

The code within this repository generates the mapping from intel svml intrinsics to the corresponding `__vdecl_*` symbols found in the c libraries of newer visual studio version (>2019)

The required code to use the intrinsics is in `generated_code/avx_svml_intrin.h` and `generated_code/avx512_svml_intrin.h`

__About the tests__  
The tests for the functions ending in `*inv` fail due to floating point precession. (either testvalue is not accurate enough or the intrinsic is not accurate enough/results are still quite good)  
The same happens sometimes for the complex functions.  

AVX512 is not yet tested. Especially the masked versions might generated a bit worse code than VS2019 due to a possible extra unmasked load/store before/after the masked load/store.  
Since the whole code is automatically generated I assume that the unmasked AVX512 code works as expected.  
(don't have a AVX512 system to test)

*Note*: If you try to build the tests with VS2019 you will encounter an internal compile error. Try to compile the tests in smaller chuncks until the ICE vanishes.  
In optimized builds some of the `divrem` test throw an access violation  with clang-cl. Commenting them out solves the problem and the tests run fine.  
(I do not understand why they throw. Would be good if somebody could tell me whats wrong.).  


__Requirements to build__  
CMake  
gtest  
boost::program_options  
c++17  
VS2019
(You might want to change the hardcoded arch flag in the CMakeLists.txt)  

