cmake_minimum_required(VERSION 3.6)
project(algorithmic_foundation)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c headers/collections.h collections.c headers/binary_tree.h binary_tree.c headers/fangcheng.h fangcheng.c fibonacci.c headers/fibonacci.h headers/sort.h sort.c)
add_executable(algorithmic_foundation ${SOURCE_FILES})