cmake_minimum_required(VERSION 3.15)
project(CLZW)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLZW sources/main.cpp sources/LZW.cpp)