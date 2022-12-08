cmake_minimum_required(VERSION 3.5)

set(NAME_TEST_PROJECT ${PROJECT_NAME}_test)

enable_testing()
add_subdirectory(../lib/googletest build)

include_directories(../main/include)

# исходники
set(SOURCE tests/factorial.cpp tests/list_of.cpp tests/list_iterator.cpp)

add_executable(${NAME_TEST_PROJECT} tests/main.cpp ${SOURCE})
target_link_libraries(${NAME_TEST_PROJECT} gtest gmock)
