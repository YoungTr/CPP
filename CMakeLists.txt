cmake_minimum_required(VERSION 3.16)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/STL)
add_subdirectory(${PROJECT_SOURCE_DIR}/OOP)
add_subdirectory(${PROJECT_SOURCE_DIR}/Sample)