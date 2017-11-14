cmake_minimum_required(VERSION 3.8)
project(MonkeyAndPeach)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Queue/InitMonkey.cpp Queue/DeQueue.cpp Queue/EnQueue.cpp Queue/Queue.h main.h Queue/KeepQueue.cpp Queue/QueueEmpty.cpp Queue/GetPeachMon.cpp Queue/AddPeachMon.cpp Queue/GetId.cpp Queue/PrintQueue.cpp)
add_executable(MonkeyAndPeach ${SOURCE_FILES})