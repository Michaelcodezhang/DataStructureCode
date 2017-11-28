cmake_minimum_required(VERSION 3.8)
project(SequentialSearch)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h CreateSSTable.cpp Search_Seq.cpp Search_Bin.cpp)
add_executable(SequentialSearch ${SOURCE_FILES})