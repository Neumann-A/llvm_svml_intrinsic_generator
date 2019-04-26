;///-------------------------------------------------------------------------------------------------
;// file:	G:\llvm_svml_intrinsic_generator\sincos.asm
;//
;// summary:	Sincos assembly 
;///-------------------------------------------------------------------------------------------------

; -----------------------------------------------------------------------------------------------------------	
; Exported symbols
PUBLIC _mm256_sincos_pd



; -----------------------------------------------------------------------------------------------------------	
; Data segment
; -----------------------------------------------------------------------------------------------------------	
_DATA SEGMENT
_DATA ENDS

; -----------------------------------------------------------------------------------------------------------	
; Text segment
; -----------------------------------------------------------------------------------------------------------	
_TEXT	SEGMENT

EXTERN __vdecl_sincos4: PROC


; Registers RCX, RDX, R8 and R9 are used to pass the first four arguments
; Even though that the first four registers are passed via the RCX, RDX, R8 and R9 registers,
; the stack pointer should still be decreased by 8 * 4 = 32 bytes prior to a function call. That is called registers shadow area.
; The caller is responsible for allocating a shadow area for the 4 registers prior to calling a function, even if the callee takes no arguments.
; The non-volatile registers are: RBX, RBP, RDI, RSI, RSP, R12, R13, R14, and R15. They must be preserved between function calls
; The volatile registers are: RAX, RCX, RDX, R8, R9, R10, R11
_mm256_sincos_pd PROC
	push rdi						; preserve rdi;
	push rsi						; preserve rsi
	sub rsp, 020h					; allocate stack space
	mov rdi, rcx					; store sine result adress in rdi;
	mov rsi, rdx					; store cosine result adress in rdi;
	vmovapd ymm0, ymmword ptr[r8]	; Move value to calculate from into register
	call __vdecl_sincos4			; call the vdecl symbol
	vmovapd ymmword ptr[rdi], ymm1	; store cosine result
	vmovapd ymmword ptr[rsi], ymm0	; store cosine result
	add rsp, 020h					; deallocate stack space
	pop rsi							; restore rsi;
	pop rdi							; restore rdi;
	ret								; sine result is returned in ymm0

_mm256_sincos_pd ENDP

_TEXT	ENDS

END