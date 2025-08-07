cmake_minimum_required(VERSION 3.26)
project(zapirka)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zapirka
        zapirka.cpp
        zapirka.h)
