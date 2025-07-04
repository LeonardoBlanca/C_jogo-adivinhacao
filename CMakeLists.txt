cmake_minimum_required(VERSION 3.31)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C main.c)

target_compile_options(main.c PUBLIC
    -finput-charset=UTF-8
    -fexec-charset=UTF-8
)