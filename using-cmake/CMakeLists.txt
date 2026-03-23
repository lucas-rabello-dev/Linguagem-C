cmake_minimum_required(VERSION 3.31)
project(teste_com_cmake)
add_executable(teste_com_cmake main.c src/libs.c)
target_include_directories(teste_com_cmake PRIVATE include)
