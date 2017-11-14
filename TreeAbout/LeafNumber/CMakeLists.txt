cmake_minimum_required(VERSION 3.8)
project(LeafNumber)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h BiTree/BiTree.h)
add_executable(LeafNumber ${SOURCE_FILES})