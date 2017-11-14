cmake_minimum_required(VERSION 3.8)
project(Conversion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h InitStack.cpp StackEmpty.cpp Pop.cpp Push.cpp ../ExpressionValue/Precede.cpp ../ExpressionValue/Operate.cpp)
add_executable(Conversion ${SOURCE_FILES})