cmake_minimum_required(VERSION 4.0)

project(chapter_1_examples C)

set(CMAKE_C_STANDARD 99)

add_executable(fahrenheit_celcius fahrenheit_celcius.c)
add_executable(fahrenheit_celcius_for_loop fahrenheit_celcius_for_loop.c)
add_executable(file_copy file_copy.c)
add_executable(char_counting char_counting.c)
add_executable(line_counting line_counting.c)
add_executable(word_counting word_counting.c)
