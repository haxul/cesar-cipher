cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)
file(GLOB SOURCES ./*.h ./*.cpp)
add_executable(untitled main.cpp menu/Menu.cpp menu/Menu.h menu/MenuInterface.h encryptions/cesar/Cesar.cpp encryptions/cesar/Cesar.h encryptions/cesar/CesarInterface.h helpers/input_helper.h encryptions/cesar/begin_encyption.h)
