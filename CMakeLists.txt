cmake_minimum_required(VERSION 3.7)
project(MS2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ErrorMessage.cpp
        ErrorMessage.h
        ms2_tester.cpp)

add_executable(MS2 ${SOURCE_FILES})