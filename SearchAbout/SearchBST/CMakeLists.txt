cmake_minimum_required(VERSION 3.8)
project(SearchBST)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SearchBST/SearchBST.h SearchBST/SearchBST.cpp main.h SearchBST/InsertBST.cpp SearchBST/CreateBST.cpp SearchBST/DeleteBST.cpp)
add_executable(SearchBST ${SOURCE_FILES})