///-------------------------------------------------------------------------------------------------
// file:	SVML_Test.cpp
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 09.04.2019
///-------------------------------------------------------------------------------------------------
#define _ENABLE_EXTENDED_ALIGNED_STORAGE 1
#include <gtest/gtest.h>
#include <type_traits>
#include <immintrin.h>
#include <cstdint>
#include <array>
#include <iostream>
#include <iomanip>
#include <cmath>


template<typename _Ty, std::size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
class aligned_array
{
private:
	alignas(align) T[_Size] _Elems;
public:
	using value_type      = _Ty;
	using size_type       = size_t;
	using difference_type = ptrdiff_t;
	using pointer         = _Ty *;
	using const_pointer   = const _Ty*;
	using reference       = _Ty &;
	using const_reference = const _Ty &;

	using iterator       = std::_Array_iterator<_Ty, _Size>;
	using const_iterator = std::_Array_const_iterator<_Ty, _Size>;

	using reverse_iterator       = _STD reverse_iterator<iterator>;
	using const_reverse_iterator = _STD reverse_iterator<const_iterator>;

	void fill(const _Ty& _Value) { // assign value to all elements
		_STD fill_n(_Elems, _Size, _Value);
	}

	void swap(array& _Other) _NOEXCEPT_COND(_Is_nothrow_swappable<_Ty>::value) { // swap contents with _Other
		_Swap_ranges_unchecked(_Elems, _Elems + _Size, _Other._Elems);
	}

	_NODISCARD _CONSTEXPR17 iterator begin() noexcept { // return iterator for beginning of mutable sequence
		return iterator(_Elems, 0);
	}

	_NODISCARD _CONSTEXPR17 const_iterator begin() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return const_iterator(_Elems, 0);
	}

	_NODISCARD _CONSTEXPR17 iterator end() noexcept { // return iterator for end of mutable sequence
		return iterator(_Elems, _Size);
	}

	_NODISCARD _CONSTEXPR17 const_iterator end() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return const_iterator(_Elems, _Size);
	}

	_NODISCARD _CONSTEXPR17 reverse_iterator
		rbegin() noexcept { // return iterator for beginning of reversed mutable sequence
		return reverse_iterator(end());
	}

	_NODISCARD _CONSTEXPR17 const_reverse_iterator rbegin() const
		noexcept { // return iterator for beginning of reversed nonmutable sequence
		return const_reverse_iterator(end());
	}

	_NODISCARD _CONSTEXPR17 reverse_iterator rend() noexcept { // return iterator for end of reversed mutable sequence
		return reverse_iterator(begin());
	}

	_NODISCARD _CONSTEXPR17 const_reverse_iterator rend() const
		noexcept { // return iterator for end of reversed nonmutable sequence
		return const_reverse_iterator(begin());
	}

	_NODISCARD _CONSTEXPR17 const_iterator cbegin() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return begin();
	}

	_NODISCARD _CONSTEXPR17 const_iterator cend() const noexcept { // return iterator for end of nonmutable sequence
		return end();
	}

	_NODISCARD _CONSTEXPR17 const_reverse_iterator crbegin() const
		noexcept { // return iterator for beginning of reversed nonmutable sequence
		return rbegin();
	}

	_NODISCARD _CONSTEXPR17 const_reverse_iterator crend() const
		noexcept { // return iterator for end of reversed nonmutable sequence
		return rend();
	}

	_CONSTEXPR17 _Ty* _Unchecked_begin() noexcept { // return plain pointer to beginning of mutable sequence
		return _Elems;
	}

	_CONSTEXPR17 const _Ty* _Unchecked_begin() const
		noexcept { // return plain pointer to beginning of nonmutable sequence
		return _Elems;
	}

	_CONSTEXPR17 _Ty* _Unchecked_end() noexcept { // return plain pointer to end of mutable sequence
		return _Elems + _Size;
	}

	_CONSTEXPR17 const _Ty* _Unchecked_end() const noexcept { // return plain pointer to end of nonmutable sequence
		return _Elems + _Size;
	}

	_NODISCARD constexpr size_type size() const noexcept { // return length of sequence
		return _Size;
	}

	_NODISCARD constexpr size_type max_size() const noexcept { // return maximum possible length of sequence
		return _Size;
	}

	_NODISCARD constexpr bool empty() const noexcept { // test if sequence is empty
		return false;
	}

	_NODISCARD _CONSTEXPR17 reference at(size_type _Pos) { // subscript mutable sequence with checking
		if (_Size <= _Pos) {
			_Xran();
		}

		return _Elems[_Pos];
	}

	_NODISCARD constexpr const_reference at(size_type _Pos) const { // subscript nonmutable sequence with checking
		if (_Size <= _Pos) {
			_Xran();
		}

		return _Elems[_Pos];
	}

	_NODISCARD _CONSTEXPR17 reference operator[](_In_range_(0, _Size - 1) size_type _Pos) noexcept { // strengthened
		// subscript mutable sequence
#if _ITERATOR_DEBUG_LEVEL != 0
		_STL_VERIFY(_Pos < _Size, "array subscript out of range");
#endif // _ITERATOR_DEBUG_LEVEL != 0

		return _Elems[_Pos];
	}

	_NODISCARD constexpr const_reference operator[](_In_range_(0, _Size - 1) size_type _Pos) const
		noexcept { // strengthened
		// subscript nonmutable sequence
#if _ITERATOR_DEBUG_LEVEL != 0
		_STL_VERIFY(_Pos < _Size, "array subscript out of range");
#endif // _ITERATOR_DEBUG_LEVEL != 0

		return _Elems[_Pos];
	}

	_NODISCARD _CONSTEXPR17 reference front() noexcept { // strengthened
		// return first element of mutable sequence
		return _Elems[0];
	}

	_NODISCARD constexpr const_reference front() const noexcept { // strengthened
		// return first element of nonmutable sequence
		return _Elems[0];
	}

	_NODISCARD _CONSTEXPR17 reference back() noexcept { // strengthened
		// return last element of mutable sequence
		return _Elems[_Size - 1];
	}

	_NODISCARD constexpr const_reference back() const noexcept { // strengthened
		// return last element of nonmutable sequence
		return _Elems[_Size - 1];
	}

	_NODISCARD _CONSTEXPR17 _Ty* data() noexcept { // return pointer to mutable data array
		return _Elems;
	}

	_NODISCARD _CONSTEXPR17 const _Ty* data() const noexcept { // return pointer to nonmutable data array
		return _Elems;
	}

	[[noreturn]] void _Xran() const { // report an out_of_range error
		_Xout_of_range("invalid array<T, N> subscript");
	}

};
std::array<double, 2> test;
//using aligned_double = std::aligned_storage_t<sizeof(double)*2,16>;
using Vector2 = aligned_array<double, 2, 16>;
using Vector4 = aligned_array<double, 4, 32>;
using Vector8 = aligned_array<double, 8, 32>;
static_assert(sizeof(double) == 8);
static_assert(std::alignment_of_v< Vector2 > == 16);
static_assert(std::alignment_of_v< Vector2 > == std::alignment_of_v< __m128d >);
static_assert(std::alignment_of_v< Vector4 > == std::alignment_of_v< __m256d >);
static_assert(sizeof(Vector2) == 2*sizeof(double));
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
extern "C"
{
#define __DEFAULT_FN_ATTRS __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(256)))
#define __DEFAULT_FN_ATTRS128 __attribute__((__always_inline__, __nodebug__, __target__("avx"), __min_vector_width__(128)))

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

	static __inline__ __m256d __DEFAULT_FN_ATTRS _mm256_sincos_pd(__m256d* pcosres, __m256d input)
	{
		__asm__(".intel_syntax noprefix");
		__asm__("sub $32, %rsp"); 
		__asm__("call __vdecl_sincos4 \t\n"
			: [sin] "+v" (input), [cos] "=v" (*pcosres)
			:
			: "%rax", "%rcx", "%rdx", "%rsp"
			);
		__asm__("add $32, %rsp");
		return input; // Input will be ymm0 and will be changed correctly
	};

}

#endif

__declspec(noinline) void SinCos(Vector4& SinData, Vector4& CosData, Vector4 MyData)
{
#ifdef __clang__
	std::cout << MyData.data() << '\n';
	__m256d Input = _mm256_load_pd((double*)MyData.data());

	//__asm__(".intel_syntax noprefix");
	__asm__("nop");
	//__m256d Input;
	//__asm__("vmovupd %[Data], %[In]" : [In] "=v" (Input), [Data] "=&v" (MyData) :  );
#else
	__m256d Input = _mm256_load_pd((double*)MyData.data());
#endif
	__m256d Output;
	Input = _mm256_sincos_pd(&Output, Input);
	_mm256_store_pd((double*)SinData.data(), Input);
	_mm256_store_pd((double*)CosData.data(), Output);
}



TEST(SVML_intrinsics_m256d, sincos) {
	constexpr const double pi = 3.141592653589793238462643383279502884197169399375;
	alignas(32) Vector4 MyData { 0.0, pi / 6.0, pi * 0.5, 3.0 * pi * 0.25 };
	alignas(32) Vector4 SinData;
	alignas(32) Vector4 CosData;

	SinCos(SinData, CosData, MyData);
	for (auto i = 0; i < MyData.size(); ++i )
	{
		
		{
			int offset = 0;
			const auto sinres = std::sin(*((double*)& MyData[i] + offset));
			const auto cosres = std::cos(*((double*)& MyData[i] + offset));

			ASSERT_DOUBLE_EQ(sinres, *((double*)& SinData[i] + offset));
			ASSERT_DOUBLE_EQ(cosres, *((double*)& CosData[i] + offset));
		}

		{
			int offset = 1;
			const auto sinres = std::sin(*((double*)& MyData[i] + offset));
			const auto cosres = std::cos(*((double*)& MyData[i] + offset));

			ASSERT_DOUBLE_EQ(sinres, *((double*)& SinData[i] + offset));
			ASSERT_DOUBLE_EQ(cosres, *((double*)& CosData[i] + offset));
		}
	}
}

//int main()
//{
//	constexpr const double pi = 3.141592653589793238462643383279502884197169399375; 
//	alignas(32) Vector4 MyData{ 0.0, pi/6.0, pi*0.5, 3.0*pi*0.25};
//	alignas(32) Vector4 SinData;
//	alignas(32) Vector4 CosData;
//	
//
//	SinCos(SinData, CosData, MyData);
//	for (auto i = 0; i < MyData.size(); ++i)
//	{
//		std::cout << "Sin result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << SinData[i] << "|\t" << std::setw(12) << std::sin(MyData[i]) << '\n';
//		std::cout << "Cos result: intrinsic vs cmath\t" << std::setw(12) << std::setprecision(7) << CosData[i] << "|\t" << std::setw(12) << std::cos(MyData[i]) << '\n';
//	}
//	std::system("pause");
//	return 0;
//}



