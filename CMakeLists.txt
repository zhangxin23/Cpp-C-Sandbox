cmake_minimum_required(VERSION 3.3)
project(cpp_sandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#    container/map.cpp
    container/vector.cpp
#    dfs/combination.cpp
#    dfs/permutation.cpp
#    dfs/permutation_2.cpp
#    dfs/restore_ip_addresses.cpp
#    exception/out_of_range.cpp
#    exception/throw_exception.cpp
#    file_test/Makefile
#    file_test/mmap_file_read.cpp
#    file_test/plain_file_read.cpp
#    file_test/plain_file_write.cpp
#    file_test/user.dat
#    lambda/lambda_1.cpp
#    lambda/lambda_2.cpp
#    pointer/const_char.cpp
#    pointer/string_array.cpp
#    print_fun/print_fun.c
#    string/access.cpp
#    string/capacity.cpp
#    string/iterator.cpp
#    string/modifier.cpp
#    string/operations.cpp
#    README.md
)

add_executable(cpp_sandbox ${SOURCE_FILES})