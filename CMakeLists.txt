cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(
  -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror
)

project(AdventOfCode)

add_executable(main 
  src/common/common.cpp
  src/2022/day1.cpp
  src/2022/day2.cpp
  main.cpp
)

target_include_directories(main PRIVATE include)
