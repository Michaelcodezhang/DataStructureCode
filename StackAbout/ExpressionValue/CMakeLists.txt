cmake_minimum_required(VERSION 3.8)
project(ExpressionValue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Push.cpp main.h Pop.cpp StackEmpty.cpp InitStack.cpp GetTop.cpp OptrOrNot.cpp Precede.cpp Operate.cpp)
add_executable(ExpressionValue ${SOURCE_FILES})