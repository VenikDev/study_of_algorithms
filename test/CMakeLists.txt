cmake_minimum_required(VERSION 3.5)

set(NAME_TEST_PROJECT ${PROJECT_NAME}_test)

enable_testing()
add_subdirectory(../lib/googletest build)

include_directories(../main/include)

# исходники
set(SOURCE tests/test_factorial.cpp tests/test_list_of.cpp tests/test_list_iterator.cpp tests/test_algorithm.cpp)

add_executable(${NAME_TEST_PROJECT} tests/main.cpp ${SOURCE})
target_link_libraries(${NAME_TEST_PROJECT} gtest gmock)
