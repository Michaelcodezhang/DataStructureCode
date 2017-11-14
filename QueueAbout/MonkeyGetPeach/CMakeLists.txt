cmake_minimum_required(VERSION 3.8)
project(MonkeyGetPeach)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h Queue/KeepQueue.cpp)
add_executable(MonkeyGetPeach ${SOURCE_FILES})