cmake_minimum_required(VERSION 3.8)
project(AdjacencyList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h AdjacencyList/AdjacencyList.h AdjacencyList/CreateALGraph.cpp)
add_executable(AdjacencyList ${SOURCE_FILES})