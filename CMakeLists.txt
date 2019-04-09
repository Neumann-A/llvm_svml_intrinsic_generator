cmake_minimum_required (VERSION 3.9 FATAL_ERROR)
include(GNUInstallDirs)

project(Create_SVML_intrinsics CXX)

add_compile_options(
    "$<$<CONFIG:Debug>:/MTd>"
    "$<$<CONFIG:RelWithDebInfo>:/MT>"
    "$<$<CONFIG:Release>:/MT>"
    "$<$<CONFIG:MinSizeRel>:/MT>")
set(BUILD_SHARED_LIBS FALSE)

##---------------------------------------------------------------------------------------##
##----- Target definition. 
##---------------------------------------------------------------------------------------##
add_executable(${PROJECT_NAME} create_clang_svml_intrinsic.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

find_package(Boost REQUIRED COMPONENTS program_options)
target_link_libraries(${PROJECT_NAME} PRIVATE Boost::program_options)


set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})