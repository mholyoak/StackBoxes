cmake_minimum_required(VERSION 3.6)
project(StackBoxes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Box.cpp Box.h IBox.h)
add_executable(StackBoxes ${SOURCE_FILES})