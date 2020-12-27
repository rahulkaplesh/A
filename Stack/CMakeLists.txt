set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(STACK_INCLUDE_HEADERS stack.hpp)

set(STACK_TST_SRC Stack/tests/stack_int_test.cpp
                  Stack/tests/stack_float_test.cpp
                  Stack/tests/stack_char_test.cpp PARENT_SCOPE)

set(HRC stack.hpp)

set(SRC stack.cpp)

add_library (Stack ${SRC})