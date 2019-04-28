///---------------------------------------------------------------------------------------------------
// file:		create_clang_svml_intrinsic.h
//
// summary: 	
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
// 
// author: Alexander
// date: 28.04.2019
#pragma once
#ifndef INC_create_clang_svml_intrinsic_H
#define INC_create_clang_svml_intrinsic_H
///---------------------------------------------------------------------------------------------------
#include <cstdint>
#include <map>
#include <filesystem>
#include <string>
#include <string_view>
#include <optional>

namespace fs = ::std::filesystem;

struct Opts
{
	fs::path vdecl;
	fs::path svml;
	fs::path avx_out;
	fs::path avx_test_out;
	fs::path avx512_out;
	fs::path avx512_test_out;
};

//Should probably be an array to run the options in a proper loop
struct opts_string
{
	std::string_view vdecl;
	std::string_view svml;
	std::string_view avx_out;
	std::string_view avx_test_out;
	std::string_view avx512_out;
	std::string_view avx512_test_out;
};
enum class intrin_type_info {
	m128i, m256i, m512i, m128, m256, m512, m128d, m256d, m512d, pm128i, pm256i, pm512i, pm128, pm256, pm512, pm128d, pm256d, pm512d, mask8, mask16, m128func, m128dfunc, undefined
};
enum class packed_type_info {
	pd, ps, epi8, epi16, epi32, epi64, epu8, epu16, epu32, epu64,
};

extern std::map<packed_type_info, std::string_view> packed_type_name_map_info;
extern std::map<packed_type_info, std::size_t> packed_type_size_map_info;
extern std::map<packed_type_info, std::string_view> packed_type_vdecl_name_map_info;
extern std::map<intrin_type_info, std::string_view> intrin_param_map_info;
extern std::map<intrin_type_info, std::size_t> intrin_type_size_map_info;
extern std::map<intrin_type_info, std::string_view> intrin_func_prefix_info;
extern std::map<intrin_type_info, std::string_view> intrin_func_suffix_info;

struct mm_intrinsics_info {
	bool hasMask{ false };
	bool isInversePrefix{ false };
	bool isInverseSuffix{ false };
	bool isIntegerFunction{ false };
	int NumberOfParams{ 0 };
	int NumberOfOutParams{ 1 };
	int PackedElements{ 0 };
	std::string FullFunctionName;
	std::string MathFunction;
	intrin_type_info ReturnType;
	intrin_type_info Prefix;
	packed_type_info Suffix;
	std::vector<intrin_type_info> ParamList;

};

struct extra_assembly_info {
	std::vector<std::string> prelude;
	std::vector<std::string> epilogue;
};

struct svml_string_info {
	std::string fullsignature;
	std::string retval;
	std::string mmfuncname;
	std::string prefix;
	std::string mask;
	std::string func;
	std::string postfix;
	std::string params;
};

struct svml_definition_info {
	svml_string_info strinfo;
	mm_intrinsics_info mminfo;
	std::string svml_to_vdecl_name{ "" };
	bool mapping_valid{ false };
};

struct vdecl_symbol_info {
	std::string FunctionName{ "" };
	std::vector<svml_definition_info*> svml_mapping;
};

struct svml_mapping_info {
	std::vector<vdecl_symbol_info> vdecl;
	std::vector<svml_definition_info> svml;
};

[[nodiscard]] bool is_pointer_type(intrin_type_info type);
[[nodiscard]] bool is_mask_type(intrin_type_info type);
[[nodiscard]] bool is_interger_func(packed_type_info type);

template<typename C>
std::optional<typename C::value_type::first_type> from_string(const C& con, std::string_view view)
{
	auto res = std::find_if(con.begin(), con.end(), [&view](const typename C::value_type elem) {return elem.second == view; });
	if (res != con.end())
		return res->first;
	else
		return std::nullopt;
};
template<typename C>
std::string_view to_string(C& con, typename C::value_type::first_type type)
{
	return con.find(type)->second;
}

#endif	// INC_create_clang_svml_intrinsic_H
// create_clang_svml_intrinsic.h

