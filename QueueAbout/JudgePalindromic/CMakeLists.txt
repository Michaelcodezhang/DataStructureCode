cmake_minimum_required(VERSION 3.8)
project(JudgePalindromic)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h Queue/InitQueue.cpp QueueEmpty.cpp Queue/EnQueue.cpp Queue/DeQueue.cpp Stack/InitStack.cpp Stack/Push.cpp Stack/Pop.cpp Queue/Queue.h Stack/Stack.h Stack/GetTop.cpp Stack/StackEmpty.cpp)
add_executable(JudgePalindromic ${SOURCE_FILES})