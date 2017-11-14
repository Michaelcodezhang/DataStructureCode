cmake_minimum_required(VERSION 3.8)
project(TripleProcess)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Triple/Triple.h Triple/TransponseSMatrix.cpp main.h Triple/CreateSMatrix.cpp Triple/PrintSMatrix.cpp Triple/AddSMatrix.cpp)
add_executable(TripleProcess ${SOURCE_FILES})