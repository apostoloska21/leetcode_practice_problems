cmake_minimum_required(VERSION 3.26)
project(even_desc_numbers)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(even_desc_numbers
        even_descending_numbers.cpp
        even_descending_numbers.h)
