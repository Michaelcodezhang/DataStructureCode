cmake_minimum_required(VERSION 3.8)
project(BiTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BiTree/BiTree.h Main_LevelOrder.h BiTree/CreateBiTree.cpp "BiTree/PrintElement/PrintBiTree(preOrder).cpp" "BiTree/PrintElement/PrintBiTree(inOrder).cpp" BiTree/PreOrderTraverse.cpp BiTree/PrintElement/PrintElement.cpp BiTree/InOrderTraverse.cpp BiTree/PostOrderTraverse.cpp "BiTree/PrintElement/PrintBiTree(PostOrder).cpp" BiTree/LeafNumber/LeafNumber_pre.cpp BiTree/LeafNumber/LeafNumber_in.cpp BiTree/LeafNumber/LeafNumber_post.cpp BiTree/LevelOrderTraverse/Main_LevelOrder.cpp BiTreeDepth.cpp)
add_executable(BiTree ${SOURCE_FILES})