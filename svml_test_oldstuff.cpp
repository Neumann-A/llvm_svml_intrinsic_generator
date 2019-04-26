	//extern void __vdecl_sincos4();
	//__m256d __declspec(noinline)
	//	__attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
	//	_mm256_sincos_pd(__m256d*, __m256d)
	//{
	//	__asm {
	//		//push rdi; preserve rdi;
	//		//push rsi; preserve rsi
	//		sub rsp, 020h; allocate stack space
	//		mov rdi, rcx; store sine result adress in rdi;
	//		mov rsi, rdx; store cosine result adress in rdi;
	//		vmovapd ymm0, ymmword ptr[r8]; Move value to calculate from into reg
	//		call __vdecl_sincos4; call the vdecl symbol
	//		vmovapd ymmword ptr[rdi], ymm1; store cosine result
	//		vmovapd ymmword ptr[rsi], ymm0; store cosine result
	//		add rsp, 020h; deallocate stack space
	//		//pop rsi; restore rsi;
	//		//pop rdi; restore rdi;
	//		//ret; sine result is returned in ymm0
	//	}
	//};
	//static __declspec(noinline) __m256d
	//	__attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
	//	_mm256_sincos_pd(__m256d* pcosres, __m256d val)
	//{
	//	__asm vmovapd ymm0, ymmword ptr[r8]; // Write val[r8] into ymm0
	//	__vdecl_sincos4(); // Changes RAX, RCX & RDX; Defined as extern __m256d __vdecl_sincos4(); 
	//	//__asm call __vdecl_sincos4;
	//	__m256d& cos = *pcosres; // Generates a required move instruction before the function call
	//	__asm vmovapd ymmword ptr[cos], ymm1; //Write cosine result

	//	__m256d sin;
	//	__asm vmovapd ymmword ptr[sin], ymm0; //Write sine result into sin

	//	return std::move(sin);
	//}

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
    
    
	//extern __m256d
	//	__attribute__((__always_inline__, __nodebug__,  __target__("avx"), __min_vector_width__(256)))
	//	 __vdecl_sincos4(); //The return value is nessecary so that clang does not insert a vzeroupper before the call!

	//extern __inline__ __m256d _mm256_sincos_pd(__m256d*, __m256d);
