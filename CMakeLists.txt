cmake_minimum_required(VERSION 3.26)
project(buffer_overflow_examples C)

set(CMAKE_C_STANDARD 17)

add_executable(buffer_overflow_examples overflow_example.c)
