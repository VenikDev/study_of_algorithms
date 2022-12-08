# version
cmake_minimum_required(VERSION 3.16)

project(coursera-study C CXX)

# function for printing all files in input dir
# PATH - path to files
function(print_files_in_dir PATH)
    foreach (FILE ${PATH})
        message("\t -- ${FILE}")
    endforeach ()
endfunction()

add_subdirectory(./main)