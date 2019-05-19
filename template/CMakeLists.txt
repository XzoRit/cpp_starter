cmake_minimum_required(VERSION 3.10)

project(#prj_name#
        VERSION 0.0)

enable_testing()

add_subdirectory(#prj_name#)
add_subdirectory(lib#prj_name#)
add_subdirectory(external)
