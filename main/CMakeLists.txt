include_directories(./)

set(HEADERS include/factorial.h include/polynome.h include/crc32.h include/list_iterator.h include/list_of.h include/types.h include/stl_algorithm.h)
set(SOURCE )

add_executable(${PROJECT_NAME} main.cpp ${HEADERS} ${SOURCE})

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-std=c++17 -O3 -Wall -Wextra -pedantic -Werror)
endif()
