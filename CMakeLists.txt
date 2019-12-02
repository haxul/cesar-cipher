cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)
file(GLOB SOURCES ./*.h ./*.cpp)
add_executable(untitled main.cpp Mammal.cpp Mammal.h)
