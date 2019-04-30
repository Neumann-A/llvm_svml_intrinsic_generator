##///-------------------------------------------------------------------------------------------------
##// file:  CMakeLists.txt
##//
##// Copyright (c) 2019 Alexander Neumann.
##// MIT License see https://github.com/Neumann-A/llvm_svml_intrinsic_generator/blob/master/LICENSE
##//
##// author: Alexander
##// date: 09.04.2019
##///-------------------------------------------------------------------------------------------------
cmake_minimum_required (VERSION 3.9 FATAL_ERROR)
include(GNUInstallDirs)

project(SVML_intrinsics CXX)

#add_compile_options(
#    "$<$<CONFIG:Debug>:/MTd>"
#    "$<$<CONFIG:RelWithDebInfo>:/MT>"
#    "$<$<CONFIG:Release>:/MT>"
#    "$<$<CONFIG:MinSizeRel>:/MT>")
set(BUILD_SHARED_LIBS FALSE)

find_package(Boost REQUIRED COMPONENTS program_options)
find_package(GTest MODULE REQUIRED)
##---------------------------------------------------------------------------------------##
##----- Target definition. 
##---------------------------------------------------------------------------------------##
add_executable(${PROJECT_NAME}  create_clang_svml_intrinsic.h   create_clang_svml_intrinsic.cpp 
                                svml_assembly_creator.h         svml_assembly_creator.cpp
                                svml_test_creator.h             svml_test_creator.cpp       
                                )
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_compile_options(${PROJECT_NAME} PRIVATE "/EHa;/MT$<$<CONFIG:Debug>:d>")

target_link_libraries(${PROJECT_NAME} PRIVATE Boost::program_options)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

##---------------------------------------------------------------------------------------##
add_executable(SVML_FirstTry SVML_Test.cpp)
target_compile_features(SVML_FirstTry PRIVATE cxx_std_17)

target_link_libraries(SVML_FirstTry PRIVATE GTest::GTest GTest::Main)
target_compile_options(SVML_FirstTry PRIVATE "/MT$<$<CONFIG:Debug>:d>;/arch:AVX;/Oy;/Z7;/sdl-;/GS-;-flto;-fwhole-program-vtables")

##---------------------------------------------------------------------------------------##
add_executable(SVML_Tests svml_test_definitions.h)
set_target_properties(SVML_Tests PROPERTIES LINKER_LANGUAGE CXX)
target_compile_features(SVML_Tests PRIVATE cxx_std_17)
target_link_libraries(SVML_Tests PRIVATE GTest::GTest GTest::Main)
target_compile_options(SVML_Tests PRIVATE "/MT$<$<CONFIG:Debug>:d>;/arch:AVX;")