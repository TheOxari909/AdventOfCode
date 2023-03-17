cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(
  -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(AdventOfCode)

add_executable(main 
  src/common/common.cpp
  src/2022/day1.cpp
  src/2022/day2.cpp
  main.cpp
)

include_directories(include)
