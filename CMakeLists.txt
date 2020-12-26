cmake_minimum_required(VERSION 3.10.0)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)
add_subdirectory(Stack)

set(SRC main.cpp)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC Stack)

target_include_directories(main PUBLIC
                          "${PROJECT_SOURCE_DIR}/Stack"
                          )
