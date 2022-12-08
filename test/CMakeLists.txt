cmake_minimum_required(VERSION 3.5)

set(NAME_TEST_PROJECT ${PROJECT_NAME}_test)

enable_testing()
add_subdirectory(../lib/googletest build)

include_directories(../main)

add_executable(${NAME_TEST_PROJECT} ./main.cpp factorial.cpp)
target_link_libraries(${NAME_TEST_PROJECT} gtest gmock)