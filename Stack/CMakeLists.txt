## Cmake to build the Stack Data Structure and add as a library

cmake_minimum_required(VERSION 3.10.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(STACK_INCLUDE_HEADERS stack.hpp)

set(HRC stack.hpp)

set(SRC stack.cpp)

add_library (Stack ${SRC})