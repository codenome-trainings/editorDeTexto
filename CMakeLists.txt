cmake_minimum_required(VERSION 3.6)
project(maquinaDeEscrever)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp programa.cpp programa.h getch.cpp getch.h)
add_executable(maquinaDeEscrever ${SOURCE_FILES})