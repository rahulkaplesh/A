set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(QUEUE_INCLUDE_HEADERS queue.hpp)

set(QUEUE_TST_SRC Queue/tests/queue_int_test.cpp PARENT_SCOPE)

set(HRC queue.hpp)

set(SRC queue.cpp)

add_library (Queue ${SRC})