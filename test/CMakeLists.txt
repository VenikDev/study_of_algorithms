cmake_minimum_required(VERSION 3.5)

set(NAME_TEST_PROJECT ${PROJECT_NAME}_test)

enable_testing()
add_subdirectory(../lib/googletest build)

include_directories(../main/include)

file(GLOB_RECURSE TEST_SRCS *.cpp)

foreach (FILE IN LISTS TEST_SRCS)
    message("-- ${FILE}")
endforeach()

add_executable(${NAME_TEST_PROJECT} ${TEST_SRCS})
target_link_libraries(${NAME_TEST_PROJECT} gtest gmock)
