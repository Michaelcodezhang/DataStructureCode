cmake_minimum_required(VERSION 3.8)
project(String)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp String/String.h String/StrAssign.cpp main.h String/StrLength.cpp String/StrCompare.cpp String/ClearString.cpp String/Concat.cpp String/PrintString.cpp String/SubString.cpp String/Index_KMP.cpp)
add_executable(String ${SOURCE_FILES})