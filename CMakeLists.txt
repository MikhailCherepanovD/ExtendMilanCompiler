cmake_minimum_required(VERSION 3.27)
project(Lab4MilanEnum)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab4MilanEnum main.cpp
        codegen.cpp
        codegen.h
        parser.cpp
        parser.h
        scanner.cpp
        scanner.h)
