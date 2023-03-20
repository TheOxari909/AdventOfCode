cmake_minimum_required(VERSION 3.0.0)
project(AdventOfCode VERSION 0.1.0)

add_compile_options(
  -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror
)

add_executable(AdventOfCode 
  src/common/common.cpp
  src/2022/day1.cpp
  src/2022/day2.cpp
  main.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include_directories(include)
