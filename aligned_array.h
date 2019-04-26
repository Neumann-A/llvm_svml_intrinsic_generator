#include <type_traits>
#include <array>

template<typename _Ty, std::size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
class aligned_array
{
public:
	alignas(align) _Ty _Elems[_Size];

	using value_type      = _Ty;
	using size_type       = size_t;
	using difference_type = ptrdiff_t;
	using pointer         = _Ty *;
	using const_pointer   = const _Ty*;
	using reference       = _Ty &;
	using const_reference = const _Ty &;

	using iterator       = ::std::_Array_iterator<_Ty, _Size>;
	using const_iterator = ::std::_Array_const_iterator<_Ty, _Size>;

	using reverse_iterator       = ::std::reverse_iterator<iterator>;
	using const_reverse_iterator = ::std::reverse_iterator<const_iterator>;

	void fill(const _Ty& _Value) { // assign value to all elements
		::std::fill_n(_Elems, _Size, _Value);
	}

	void swap(aligned_array& _Other) _NOEXCEPT_COND(::std::_Is_nothrow_swappable<_Ty>::value) { // swap contents with _Other
		_Swap_ranges_unchecked(_Elems, _Elems + _Size, _Other._Elems);
	}

	[[nodiscard]] constexpr iterator begin() noexcept { // return iterator for beginning of mutable sequence
		return iterator(_Elems, 0);
	}

	[[nodiscard]] constexpr const_iterator begin() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return const_iterator(_Elems, 0);
	}

	[[nodiscard]] constexpr iterator end() noexcept { // return iterator for end of mutable sequence
		return iterator(_Elems, _Size);
	}

	[[nodiscard]] constexpr const_iterator end() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return const_iterator(_Elems, _Size);
	}

	[[nodiscard]] constexpr reverse_iterator
		rbegin() noexcept { // return iterator for beginning of reversed mutable sequence
		return reverse_iterator(end());
	}

	[[nodiscard]] constexpr const_reverse_iterator rbegin() const
		noexcept { // return iterator for beginning of reversed nonmutable sequence
		return const_reverse_iterator(end());
	}

	[[nodiscard]] constexpr reverse_iterator rend() noexcept { // return iterator for end of reversed mutable sequence
		return reverse_iterator(begin());
	}

	[[nodiscard]] constexpr const_reverse_iterator rend() const
		noexcept { // return iterator for end of reversed nonmutable sequence
		return const_reverse_iterator(begin());
	}

	[[nodiscard]] constexpr const_iterator cbegin() const
		noexcept { // return iterator for beginning of nonmutable sequence
		return begin();
	}

	[[nodiscard]] constexpr const_iterator cend() const noexcept { // return iterator for end of nonmutable sequence
		return end();
	}

	[[nodiscard]] constexpr const_reverse_iterator crbegin() const
		noexcept { // return iterator for beginning of reversed nonmutable sequence
		return rbegin();
	}

	[[nodiscard]] constexpr const_reverse_iterator crend() const
		noexcept { // return iterator for end of reversed nonmutable sequence
		return rend();
	}

	constexpr _Ty* _Unchecked_begin() noexcept { // return plain pointer to beginning of mutable sequence
		return _Elems;
	}

	constexpr const _Ty* _Unchecked_begin() const
		noexcept { // return plain pointer to beginning of nonmutable sequence
		return _Elems;
	}

	constexpr _Ty* _Unchecked_end() noexcept { // return plain pointer to end of mutable sequence
		return _Elems + _Size;
	}

	constexpr const _Ty* _Unchecked_end() const noexcept { // return plain pointer to end of nonmutable sequence
		return _Elems + _Size;
	}

	[[nodiscard]] constexpr size_type size() const noexcept { // return length of sequence
		return _Size;
	}

	[[nodiscard]] constexpr size_type max_size() const noexcept { // return maximum possible length of sequence
		return _Size;
	}

	[[nodiscard]] constexpr bool empty() const noexcept { // test if sequence is empty
		return false;
	}

	[[nodiscard]] constexpr reference at(size_type _Pos) { // subscript mutable sequence with checking
		if (_Size <= _Pos) {
			_Xran();
		}

		return _Elems[_Pos];
	}

	[[nodiscard]] constexpr const_reference at(size_type _Pos) const { // subscript nonmutable sequence with checking
		if (_Size <= _Pos) {
			_Xran();
		}

		return _Elems[_Pos];
	}

	[[nodiscard]] constexpr reference operator[](_In_range_(0, _Size - 1) size_type _Pos) noexcept { // strengthened
		// subscript mutable sequence
#if _ITERATOR_DEBUG_LEVEL != 0
		_STL_VERIFY(_Pos < _Size, "array subscript out of range");
#endif // _ITERATOR_DEBUG_LEVEL != 0

		return _Elems[_Pos];
	}

	[[nodiscard]] constexpr const_reference operator[](_In_range_(0, _Size - 1) size_type _Pos) const
		noexcept { // strengthened
		// subscript nonmutable sequence
#if _ITERATOR_DEBUG_LEVEL != 0
		_STL_VERIFY(_Pos < _Size, "array subscript out of range");
#endif // _ITERATOR_DEBUG_LEVEL != 0

		return _Elems[_Pos];
	}

	[[nodiscard]] constexpr reference front() noexcept { // strengthened
		// return first element of mutable sequence
		return _Elems[0];
	}

	[[nodiscard]] constexpr const_reference front() const noexcept { // strengthened
		// return first element of nonmutable sequence
		return _Elems[0];
	}

	[[nodiscard]] constexpr reference back() noexcept { // strengthened
		// return last element of mutable sequence
		return _Elems[_Size - 1];
	}

	[[nodiscard]] constexpr const_reference back() const noexcept { // strengthened
		// return last element of nonmutable sequence
		return _Elems[_Size - 1];
	}

	[[nodiscard]] constexpr _Ty* data() noexcept { // return pointer to mutable data aligned_array
		return _Elems;
	}

	[[nodiscard]] constexpr const _Ty* data() const noexcept { // return pointer to nonmutable data aligned_array
		return _Elems;
	}

	[[noreturn]] void _Xran() const { // report an out_of_range error
		_Xout_of_range("invalid aligned_array<T, N> subscript");
	}

};

template <class _First, class... _Rest>
aligned_array(_First, _Rest...)->aligned_array<typename ::std::_Enforce_same<_First, _Rest...>::type, 1 + sizeof...(_Rest)>;

template <class _Ty, size_t _Size, class = ::std::enable_if_t<_Size == 0 || ::std::_Is_swappable<_Ty>::value>, std::size_t align = std::alignment_of_v< _Ty >>
void swap(aligned_array<_Ty, _Size, align> & _Left, aligned_array<_Ty, _Size, align> & _Right)
_NOEXCEPT_COND(noexcept(_Left.swap(_Right))) { // swap aligned_arrays
	return _Left.swap(_Right);
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator==(const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test for aligned_array equality
	return ::std::equal(_Left.begin(), _Left.end(), _Right.begin());
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator!=(
	const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test for aligned_array inequality
	return !(_Left == _Right);
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator<(
	const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test if _Left < _Right for aligned_arrays
	return ::std::lexicographical_compare(_Left.begin(), _Left.end(), _Right.begin(), _Right.end());
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator>(
	const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test if _Left > _Right for aligned_arrays
	return _Right < _Left;
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator<=(
	const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test if _Left <= _Right for aligned_arrays
	return !(_Right < _Left);
}

template <class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] bool operator>=(
	const aligned_array<_Ty, _Size, align>& _Left, const aligned_array<_Ty, _Size, align>& _Right) { // test if _Left >= _Right for aligned_arrays
	return !(_Left < _Right);
}

// TUPLE INTERFACE TO aligned_array
template <size_t _Idx,class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] constexpr _Ty& get(aligned_array<_Ty, _Size, align>& _Arr) noexcept { // return element at _Idx in aligned_array _Arr
	static_assert(_Idx < _Size, "array index out of bounds");
	return _Arr._Elems[_Idx];
}

template <size_t _Idx,class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] constexpr const _Ty& get(const aligned_array<_Ty, _Size, align>& _Arr) noexcept { // return element at _Idx in aligned_array _Arr
	static_assert(_Idx < _Size, "array index out of bounds");
	return _Arr._Elems[_Idx];
}

template <size_t _Idx,class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] constexpr _Ty&& get(aligned_array<_Ty, _Size, align>&& _Arr) noexcept { // return element at _Idx in aligned_array _Arr
	static_assert(_Idx < _Size, "array index out of bounds");
	return ::std::move(_Arr._Elems[_Idx]);
}

template <size_t _Idx,class _Ty, size_t _Size, std::size_t align = std::alignment_of_v< _Ty >>
[[nodiscard]] constexpr const _Ty&& get(const aligned_array<_Ty, _Size, align>&& _Arr) noexcept { // return element at _Idx in aligned_array _Arr
	static_assert(_Idx < _Size, "array index out of bounds");
	return ::std::move(_Arr._Elems[_Idx]);
}

