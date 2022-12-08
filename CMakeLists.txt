# version
cmake_minimum_required(VERSION 3.16)

project(study_of_algorithms C CXX)

set (CMAKE_CXX_STANDARD 17)

# function for printing all files in input dir
# PATH - path to files
function(print_files_in_dir PATH)
    foreach (FILE ${PATH})
        message("\t -- ${FILE}")
    endforeach ()
endfunction()

add_subdirectory(./main)
add_subdirectory(./test)