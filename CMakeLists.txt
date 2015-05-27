cmake_minimum_required(VERSION 3.2)
project(Student)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Student ${SOURCE_FILES} Students.cpp Students.h DDD/NewCppClass.cpp DDD/NewCppClass.h)