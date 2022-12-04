cmake_minimum_required(VERSION 3.16)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/STL)