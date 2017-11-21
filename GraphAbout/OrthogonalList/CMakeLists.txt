cmake_minimum_required(VERSION 3.8)
project(OrthogonalList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp OLGraph/OLGraph.h main.h OLGraph/CreateDG.cpp OLGraph/LocateVex.cpp OLGraph/DFSTraverse.cpp OLGraph/FirstAdjVex.cpp OLGraph/NextAdjVex.cpp OLGraph/BFSTraverse.cpp Queue/Queue.h Queue/InitQueue.cpp Queue/EnQueue.cpp Queue/DeQueue.cpp Queue/QueueEmpty.cpp)
add_executable(OrthogonalList ${SOURCE_FILES})