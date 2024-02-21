cmake_minimum_required(VERSION 3.27)
project(0x1E_search_algorithms C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(0x1E_search_algorithms
        0-linear.c
        1-binary.c
        100-jump.c
        102-interpolation.c
        103-exponential.c
        104-advanced_binary.c
        105-jump_list.c
        106-linear_skip.c
        search_algos.h)
