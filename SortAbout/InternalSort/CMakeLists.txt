cmake_minimum_required(VERSION 3.8)
project(InternalSort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SortAlgorithms/SqList.h main.h SortAlgorithms/InsertSort.cpp SortAlgorithms/CreateSqList.cpp SortAlgorithms/PrintSqList.cpp SortAlgorithms/SelectSort.cpp SortAlgorithms/HeapSort.cpp)
add_executable(InternalSort ${SOURCE_FILES})