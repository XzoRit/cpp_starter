cmake_minimum_required(VERSION 3.12)

project(
  #prj_name#_executeable
  VERSION 0.0
  DESCRIPTION "executable #prj_name# application")

add_executable(
  #prj_name#_exe)
target_sources(
  #prj_name#_exe
  PRIVATE
  "main.cpp")
target_link_libraries(
  #prj_name#_exe
  PRIVATE
  lib#prj_name#::lib
  Boost::program_options)

add_test(
  NAME #prj_name#::exe
  COMMAND #prj_name#_exe "--help")
