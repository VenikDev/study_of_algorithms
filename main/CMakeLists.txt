include_directories(./)

add_executable(${PROJECT_NAME} main.cpp factorial.h)

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-std=c++17 -O2 -Wall -Wextra -pedantic -Werror)
endif()
