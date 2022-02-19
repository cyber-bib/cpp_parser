cmake_minimum_required(VERSION 3.20.0 FATAL_ERROR)

project(vimdex-prj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(vimdex main.cxx)
target_include_directories(vimdex
  PUBLIC
    "C:/Users/Alex/dev/boost_1_78_0"
)