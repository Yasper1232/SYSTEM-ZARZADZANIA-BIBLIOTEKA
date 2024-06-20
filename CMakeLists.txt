cmake_minimum_required(VERSION 3.26)
project(Biblioteka)

set(CMAKE_CXX_STANDARD 17)

add_executable(Biblioteka main.cpp
        biblioteka.h
        biblioteka.cpp)
