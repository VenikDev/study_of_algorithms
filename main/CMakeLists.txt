include_directories(./)

add_executable(${PROJECT_NAME} main.cpp)

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-std=c++20 -O2 -Wall -Wextra -pedantic -Werror)
endif()
