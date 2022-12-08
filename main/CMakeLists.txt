include_directories(./)

set(HEADERS include/factorial.h include/polynome.h include/crc32.h)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS})

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-std=c++17 -O3 -Wall -Wextra -pedantic -Werror)
endif()
