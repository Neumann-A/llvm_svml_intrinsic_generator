///-------------------------------------------------------------------------------------------------
// file:	create_clang_svml_intrinsic.cpp
//
// Copyright (c) 2019 Alexander Neumann.
// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
//
// author: Alexander
// date: 09.04.2019

///-------------------------------------------------------------------------------------------------
#include <immintrin.h>

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <type_traits>
#include <filesystem>
#include <list>
#include <deque>
#include <map>
#include <optional>
#include <regex>

#include <boost/program_options.hpp>

namespace bo_opts = ::boost::program_options;
namespace fs = ::std::filesystem;

struct Opts
{
	fs::path vdecl;
	fs::path svml;
	//fs::path output;
	//fs::path testoutput;
} ;

//Should probably be an array to run the options in a proper loop
struct opts_string
{
	std::string_view vdecl;
	std::string_view svml;
};

struct func_str_list
{
	std::vector<std::string> vdecl;
	std::vector<std::string> svml;
};

constexpr const opts_string optstr{ "vdecl-list","svml-list" };


bo_opts::options_description desc{ "Options" };

void displayHelp()
{
	::std::cerr << "This programm will use the VDECL & SVML input files to automatically generate a header to map VS __vdecl symbols to SVML __mm intrinsics.\n";
	::std::cerr << desc << std::endl;
}

void parseOptions(int argc, char** argv, Opts& opts)
{
	desc.add_options()
		("help", "This programm will")
		(optstr.vdecl.data(), bo_opts::value<fs::path>(&opts.vdecl)->default_value({ "vdecl_list.txt" }), "list with vdecl symbols to map")
//		(optstr.svml.data(), bo_opts::value<fs::path>(&opts.svml)->default_value({ "svml_intrinsics_vs.txt" }), "list with all svml intrinsics");
		(optstr.svml.data(), bo_opts::value<fs::path>(&opts.svml)->default_value({ "svml_intrinsics.txt" }), "list with all svml intrinsics");

	bo_opts::variables_map vm;
	bo_opts::store(bo_opts::parse_command_line(argc, argv, desc), vm);
	bo_opts::notify(vm);
	if (vm.count("help") > 0)
	{
		displayHelp();
	}

	//const auto val = vm[optstr.vdecl.data()];

	//Opts opts{ vm[optstr.vdecl.data()].as<fs::path>(), vm[optstr.svml.data()].as<fs::path>() };

	::std::cerr << "This programm will use the VDECL & SVML input files to automatically generate a header to map Microsofts __vdecl symbols to SVML __mm intrinsics.\n";
	::std::cerr << "SVML Input file: " << opts.svml << '\n';
	::std::cerr << "VDECL Input file: " << opts.svml << '\n';
}

void checkOpts(const Opts& opts)
{
	if (!std::filesystem::exists(opts.vdecl))
	{
		::std::cerr << "VDECL Input does not exist! Filepath: " << opts.vdecl << '\n';
		::std::abort();
	}

	if (!std::filesystem::exists(opts.svml))
	{
		::std::cerr << "SVML Input does not exist! Filepath: " << opts.svml << '\n';
		::std::abort();
	}
};

func_str_list loadLists(const Opts& opts)
{
	func_str_list lines;
	{
		std::ifstream vdeclfile(opts.vdecl);
		std::ifstream svmlfile(opts.svml);	

		for (std::string line; std::getline(vdeclfile, line);)
		{
			lines.vdecl.push_back(line);
		}
		for (std::string line; std::getline(svmlfile, line);)
		{
			lines.svml.push_back(line);
		}
	}
	return lines;
}

enum class intrin_type_info {
	m128i, m256i, m512i, m128, m256, m512, m128d, m256d, m512d, pm128i, pm256i, pm512i, pm128, pm256, pm512, pm128d, pm256d, pm512d, mask8, mask16, m128func, m128dfunc, undefined
};
enum class packed_type_info {
	pd, ps, epi8, epi16, epi32, epi64, epu8, epu16, epu32, epu64,
};

std::map<packed_type_info, std::string_view> packed_type_name_map_info{
	{packed_type_info::pd, "pd"},
	{packed_type_info::ps, "ps"},
	{packed_type_info::epi8, "epi8"},
	{packed_type_info::epi16, "epi16"},
	{packed_type_info::epi32, "epi32"},
	{packed_type_info::epi64, "epi64"},
	{packed_type_info::epu8, "epu8"},
	{packed_type_info::epu16, "epu16"},
	{packed_type_info::epu32, "epu32"},
	{packed_type_info::epu64, "epu64"}
};
std::map<packed_type_info, std::size_t> packed_type_size_map_info{
	{packed_type_info::pd, sizeof(double)},
	{packed_type_info::ps, sizeof(float)},
	{packed_type_info::epi8, sizeof(std::int8_t)},
	{packed_type_info::epi16, sizeof(std::int16_t)},
	{packed_type_info::epi32, sizeof(std::int32_t)},
	{packed_type_info::epi64, sizeof(std::int64_t)},
	{packed_type_info::epu8, sizeof(std::uint8_t)},
	{packed_type_info::epu16, sizeof(std::uint16_t)},
	{packed_type_info::epu32, sizeof(std::uint32_t)},
	{packed_type_info::epu64, sizeof(std::uint64_t)}
};
std::map<packed_type_info, std::string_view> packed_type_vdecl_name_map_info{
	{packed_type_info::pd, ""},
	{packed_type_info::ps, "f"},
	{packed_type_info::epi8, "i8"},
	{packed_type_info::epi16, "i16"},
	{packed_type_info::epi32, "i32"},
	{packed_type_info::epi64, "i64"},
	{packed_type_info::epu8, "u8"},
	{packed_type_info::epu16, "u16"},
	{packed_type_info::epu32, "u32"},
	{packed_type_info::epu64, "u64"}
};

std::map<intrin_type_info, std::string_view> intrin_param_map_info{
	{intrin_type_info::m128i, "__m128i"},
	{intrin_type_info::m256i, "__m256i"},
	{intrin_type_info::m512i, "__m512i"},
	{intrin_type_info::m128, "__m128"},
	{intrin_type_info::m256, "__m256"},
	{intrin_type_info::m512, "__m512"},
	{intrin_type_info::m128d, "__m128d"},
	{intrin_type_info::m256d, "__m256d"},
	{intrin_type_info::m512d, "__m512d"},
	{intrin_type_info::pm128i, "__m128i *"},
	{intrin_type_info::pm256i, "__m256i *"},
	{intrin_type_info::pm512i, "__m512i *"},
	{intrin_type_info::pm128, "__m128 *"},
	{intrin_type_info::pm256, "__m256 *"},
	{intrin_type_info::pm512, "__m512 *"},
	{intrin_type_info::pm128d, "__m128d *"},
	{intrin_type_info::pm256d, "__m256d *"},
	{intrin_type_info::pm512d, "__m512d *"},
	{intrin_type_info::mask8, "__mmask8"},
	{intrin_type_info::mask16, "__mmask16"},
};
std::map<intrin_type_info, std::size_t> intrin_type_size_map_info{
	{intrin_type_info::m128, sizeof(__m128)},
	{intrin_type_info::m256, 2*sizeof(__m128)},
	{intrin_type_info::m512, 4*sizeof(__m128)},
	{intrin_type_info::m128i, sizeof(__m128)},
	{intrin_type_info::m256i, 2 * sizeof(__m128)},
	{intrin_type_info::m512i, 4 * sizeof(__m128)},
	{intrin_type_info::m128d, sizeof(__m128)},
	{intrin_type_info::m256d, 2 * sizeof(__m128)},
	{intrin_type_info::m512d, 4 * sizeof(__m128)}
};

[[nodiscard]] bool is_pointer_type(intrin_type_info type)
{
	switch (type)
	{
	case intrin_type_info::pm128i:
	case intrin_type_info::pm256i:
	case intrin_type_info::pm512i:
	case intrin_type_info::pm128:
	case intrin_type_info::pm256:
	case intrin_type_info::pm512:
	case intrin_type_info::pm128d:
	case intrin_type_info::pm256d:
	case intrin_type_info::pm512d:
		return true; 
	default:
		return false;
	}
}
[[nodiscard]] bool is_mask_type(intrin_type_info type)
{
	switch (type)
	{
	case intrin_type_info::mask8:
	case intrin_type_info::mask16:
		return true;
	default:
		return false;
	}
}
[[nodiscard]] bool is_interger_func(packed_type_info type)
{
	switch (type)
	{
	case packed_type_info::epi8:
	case packed_type_info::epi16:
	case packed_type_info::epi32:
	case packed_type_info::epi64:
	case packed_type_info::epu8:
	case packed_type_info::epu16:
	case packed_type_info::epu32:
	case packed_type_info::epu64:
		return true;
	default:
		return false;
	}
}

std::map<intrin_type_info, std::string_view> intrin_func_prefix_info{
	{intrin_type_info::m128, "mm"},
	{intrin_type_info::m256, "mm256"},
	{intrin_type_info::m512, "mm512"},
};
std::map<intrin_type_info, std::string_view> intrin_func_suffix_info{
	{intrin_type_info::m128i, ""},
	{intrin_type_info::m256i, ""},
	{intrin_type_info::m512i, ""},
	{intrin_type_info::m128, "ps"},
	{intrin_type_info::m256, "ps"},
	{intrin_type_info::m512, "ps"},
	{intrin_type_info::m128d, "pd"},
	{intrin_type_info::m256d, "pd"},
	{intrin_type_info::m512d, "pd"}
};

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
std::string_view to_string(const C& con, typename C::value_type::first_type type)
{
	return con.find[type];
}

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

struct vdecl_symbol_info {
	std::string FunctionName{""};
	std::vector<std::string> svml_mapping;
};

struct svml_string_info {
	std::string fullsignature;
	std::string retval;
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

std::ostream& operator<<(std::ostream& os, const svml_string_info& info)
{
	os << "SVML STRING INFO Return: " << info.retval << '\n'; 
	os << "SVML STRING INFO Prefix: " << info.prefix << '\n';
	os << "SVML STRING INFO Mask: " << (info.mask.empty() ? false : true) << '\n';
	os << "SVML STRING INFO Name: " << info.func << '\n';
	os << "SVML STRING INFO Postfix: " << info.postfix << '\n';
	os << "SVML STRING INFO Params: " << info.params << '\n';
	return os;
}

struct svml_mapping_info{
	std::vector<vdecl_symbol_info> vdecl;
	std::vector<svml_definition_info> svml;
};

[[nodiscard]] bool is_complex_func(const std::string_view str)
{
	bool is_csqrt = (str.find("csqrt") != std::string_view::npos);
	bool is_clog = (str.find("clog") != std::string_view::npos);
	bool is_cexp = (str.find("cexp") != std::string_view::npos);
	return (is_csqrt || is_clog || is_cexp);
}

static const std::regex vdeclanalyzeregex{ "__vdecl_[a-zA-Z0-9]+[2468]" };
[[nodiscard]] std::optional<vdecl_symbol_info> analyze_vdecl_line(const std::string& str)
{
	std::smatch m;
	std::regex_search(str, m, vdeclanalyzeregex);
	if (!m.empty())
	{
		for (auto& elems : m)
		{
			::std::cerr << "Match: " << elems << '\n';
			
		}
		return vdecl_symbol_info{ m[0] };
	}
	
	return { std::nullopt };
}

static const std::regex isinversesuffixregex{"[a-z]+inv"};
static const std::regex isinverseprefixregex{ "inv[a-z]+" };
[[nodiscard]] bool is_inverse_suffix_func(const std::string& str)
{
	std::smatch m;
	return std::regex_match(str, m, isinversesuffixregex);
}
[[nodiscard]] bool is_inverse_prefix_func(const std::string& str)
{
	std::smatch m;
	return std::regex_match(str, m, isinverseprefixregex);
}
std::string remove_inverse_suffix(const std::string& str)
{
	return str.substr(0, str.size() - 3);
}

std::string remove_inverse_prefix(const std::string& str)
{
	return str.substr(3, str.size());
}

std::string build_vdecl_symbol_name(const mm_intrinsics_info& info)
{
	std::stringstream stream;
	stream << "__vdecl_";
	if (info.isIntegerFunction)
	{
		stream << packed_type_vdecl_name_map_info[info.Suffix];
		if ((info.MathFunction[0] == 'u' || info.MathFunction[0] == 'i'))
			stream << info.MathFunction.substr(1, info.MathFunction.size());
		else
			stream << info.MathFunction;
	}
	else
	{
		if (info.isInversePrefix)
			stream << "inv";
		stream << info.MathFunction;
		if (info.isInverseSuffix)
			stream << "inv";
		stream << packed_type_vdecl_name_map_info[info.Suffix];
	}
	stream << std::to_string(info.PackedElements);
	return stream.str();
}

static const std::regex svmlanalyzerregex{ "(__[^_]+) _([^_]+)_(mask)?_?(svml_)?([^_]+)_([^_]+) ?\\(([^\\(\\)]+)\\)" };
static const std::regex svmlanalyzerparams{ "(__m[0-9id]{3,4} \\*|__m[0-9id]{3,4}|__mmask8|__mmask16)" };
[[nodiscard]] std::optional<svml_definition_info> analyze_svml_line(const std::string& str)
{
	::std::cerr << "Analysing line: " << str << '\n';
	std::smatch m;
	std::regex_search(str, m, svmlanalyzerregex);
	if (!m.empty())
	{
		svml_string_info info{ m[0],m[1],m[2],m[4],m[5],m[6],m[7] };
		//mm_intrinsics_info{ !info.mask.empty(), };
		//::std::cerr << info;

		std::size_t pos{ 0 };
		std::size_t lastpos{ 0 };
		std::smatch m2;

		std::vector<intrin_type_info> params;

		//should probably rename this lambda to something more usefull
		auto func_on_type_lambda = [](auto& map, const std::string& strtype, auto& func) {
			auto type = from_string(map, strtype);
			if (type) {
				func(*type);
			}
			else {
				::std::cerr << "Could not determine type for " << strtype << '\n';
			}
		};

		auto return_type = [](auto& map,const std::string& strtype) {
			auto type = from_string(map, strtype);
			return type.value();
		};

		while(pos < info.params.size())
		{
			pos = info.params.find(',', lastpos);
			auto substr = info.params.substr(lastpos, pos-1);
			lastpos = pos+1;
			std::regex_search(substr, m2, svmlanalyzerparams);
			if (!m2.empty() && m2.size() > 1)
			{
				auto emplace_back = [&params](auto elem) {params.emplace_back(std::move(elem)); };
				func_on_type_lambda(intrin_param_map_info, m2[1].str(), emplace_back);
			}			
		}

		//Setting all the intrinsic information. 
		mm_intrinsics_info mm_info;
		mm_info.ReturnType = return_type(intrin_param_map_info, info.retval);
		mm_info.isInverseSuffix = is_inverse_suffix_func(info.func);
		mm_info.isInversePrefix = is_inverse_prefix_func(info.func);
		if (mm_info.isInverseSuffix)
			mm_info.MathFunction = remove_inverse_suffix(info.func);
		else if (mm_info.isInversePrefix)
			mm_info.MathFunction = remove_inverse_prefix(info.func);
		else
			mm_info.MathFunction = info.func;
		mm_info.Prefix = return_type(intrin_func_prefix_info, info.prefix);
		mm_info.Suffix = return_type(packed_type_name_map_info, info.postfix);
		mm_info.isIntegerFunction = is_interger_func(mm_info.Suffix);
		mm_info.NumberOfParams = params.size();
		mm_info.ParamList = params;
		auto find_mask = [](auto & list) {
			for (auto& elem : list)
			{
				if (is_mask_type(elem))
					return true;
			} return false; };
		mm_info.hasMask = find_mask(params);
		mm_info.FullFunctionName = info.fullsignature;
		mm_info.PackedElements = intrin_type_size_map_info[mm_info.ReturnType]/packed_type_size_map_info[mm_info.Suffix];
		if (is_complex_func(mm_info.MathFunction))
			mm_info.PackedElements /= 2;
		return svml_definition_info{ info, mm_info, build_vdecl_symbol_name(mm_info)};
	}
	return { std::nullopt };
}

[[nodiscard]] std::vector<vdecl_symbol_info> analyze_vdecl_list(std::vector<std::string>& strlist)
{
	std::vector<vdecl_symbol_info> symbol_info;
	symbol_info.reserve(strlist.size());
	std::vector<std::string> notanalyzed;
	for (const auto& elem : strlist)
	{
		auto info = analyze_vdecl_line(elem);
		if (!info)
		{
			notanalyzed.push_back(elem);
			::std::cerr << "Could not analyze line: " << elem << '\n';
			continue;
		}
		symbol_info.emplace_back(std::move(*info));
	}
	strlist = notanalyzed;
	symbol_info.shrink_to_fit();
	return symbol_info;
}

[[nodiscard]] std::vector<svml_definition_info> analyze_svml_list(std::vector<std::string>& strlist)
{
	std::vector<svml_definition_info> symbol_info;
	symbol_info.reserve(strlist.size());
	std::vector<std::string> notanalyzed;
	for (const auto& elem : strlist)
	{
		auto info = analyze_svml_line(elem);
		if (!info)
		{
			notanalyzed.push_back(elem);
			::std::cerr << "Could not analyze line: " << elem << '\n';
			continue;
		}
		symbol_info.emplace_back(std::move(*info));
	}
	strlist = notanalyzed;
	symbol_info.shrink_to_fit();
	return symbol_info;
}

[[nodiscard]] svml_mapping_info analyzeInputLists(func_str_list& list) {

	auto vdeclinfo = analyze_vdecl_list(list.vdecl);
	auto svmlinfo = analyze_svml_list(list.svml);

	for (auto& elem : svmlinfo)
	{
		auto vdeclelem = std::find_if(vdeclinfo.begin(), vdeclinfo.end(), [&](vdecl_symbol_info & elem2) {
			return elem2.FunctionName == elem.svml_to_vdecl_name;
			});
		if (vdeclelem == vdeclinfo.end())
		{
			::std::cerr << "No Mapping for: " << elem.strinfo.fullsignature << " found\n";
			::std::cerr << "Mapping should have been: " << elem.svml_to_vdecl_name << "!\n";
			continue;
		}
		
		elem.mapping_valid = true;
		vdeclelem->svml_mapping.push_back(elem.strinfo.fullsignature);
	}

	for (auto& elem : vdeclinfo)
	{
		if (elem.svml_mapping.size() != 0)
		{
			::std::cerr << "VDECL SYMBOL: " << elem.FunctionName << " mapped to: \n";
			for (auto& mapped : elem.svml_mapping)
				::std::cerr << mapped << '\t';
			::std::cerr << '\n';						
		}
	}

	for (auto& elem : vdeclinfo)
	{
		if (elem.svml_mapping.size() == 0)
		{
			::std::cerr << "No Mapping for vdecl symbol: " << elem.FunctionName << " \n";
		}
	}

	//std::size_t mappings_found = std::count_if(svmlinfo.begin(), svmlinfo.end(), [&](svml_definition_info & elem) {
	//	return std::find_if(vdeclinfo.begin(), vdeclinfo.end(), [&](vdecl_symbol_info & elem2) { 
	//		return elem2.FunctionName == elem.svml_to_vdecl_name; 
	//		}) != vdeclinfo.end(); 
	//	});
	return { vdeclinfo , svmlinfo };
}

void outputRemainingLists(func_str_list& list)
{
	::std::cerr << "The following __vdecl symbols have not been mapped: \n";
	for (const auto& elem : list.vdecl)
		::std::cerr << elem << '\n';
	
	::std::cerr << "The following SVML intrinsics could not be found within the __vdecl symbols: \n";
	for (const auto& elem : list.svml)
		::std::cerr << elem << '\n';
}

int main(int argc,  char** argv)
{	
	Opts opts;
	parseOptions(argc, argv, opts);
	checkOpts(opts);

	auto list = loadLists(opts);

	auto mapping_info = analyzeInputLists(list);

	//outputRemainingLists(list);

	return EXIT_SUCCESS;
}