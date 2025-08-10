cmake_minimum_required(VERSION 4.0)

project(chapter_1_examples C)

set(CMAKE_C_STANDARD 99)

add_executable(fahrenheit_celcius fahrenheit_celcius.c)
add_executable(fahrenheit_celcius_for_loop fahrenheit_celcius_for_loop.c)
add_executable(file_copy file_copy.c)