cmake_minimum_required(VERSION 3.12)

project(
  #prj_name#_library
  VERSION 0.0
  DESCRIPTION "library for parsing #prj_name#")

add_library(
  lib#prj_name#_obj_lib OBJECT)
target_sources(
  lib#prj_name#_obj_lib
  PRIVATE "#prj_name#.cpp")
target_include_directories(
  lib#prj_name#_obj_lib
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/..")

add_library(
  lib#prj_name#_lib)
target_link_libraries(
  lib#prj_name#_lib
  PUBLIC lib#prj_name#_obj_lib)

add_library(
  lib#prj_name#::lib ALIAS lib#prj_name#_lib)

add_executable(
  lib#prj_name#_test)
target_sources(
  lib#prj_name#_test
  PRIVATE
  "#prj_name#.test.cpp"
  "main.test.cpp")
target_link_libraries(
  lib#prj_name#_test
  PRIVATE
  lib#prj_name#::lib
  Boost::unit_test_framework
)

add_test(
  NAME lib#prj_name#::test
  COMMAND lib#prj_name#_test "--color_output=false")
