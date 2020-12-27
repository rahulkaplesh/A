cmake_minimum_required(VERSION 3.10.0)

set(CMAKE_CXX_STANDARD 17)

set(SRC main.cpp)

set(TST_SRC test.cpp)

add_subdirectory(googletest)
add_subdirectory(Stack)
add_subdirectory(Queue)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(Stack)
include_directories(Queue)

add_executable(main ${SRC})

target_link_libraries(main PUBLIC Stack Queue)

target_include_directories(main PUBLIC
                          "${PROJECT_SOURCE_DIR}/Stack"
                          "${PROJECT_SOURCE_DIR}/Queue"
                          )

add_executable(main_test ${TST_SRC} ${STACK_TST_SRC} ${QUEUE_TST_SRC})

add_test(NAME main_test COMMAND main_test)

target_link_libraries(main_test PUBLIC Stack Queue gtest)