include_directories(./)

file(GLOB_RECURSE SRCS *.cpp)
file(GLOB_RECURSE HDRS *.h)

foreach (FILE IN LISTS SRCS HDRS)
    message("-- ${FILE}")
endforeach()

add_executable(${PROJECT_NAME} main.cpp ${HEADERS} ${SOURCE})

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-std=c++17 -O3 -Wall -Wextra -pedantic -Werror)
endif()