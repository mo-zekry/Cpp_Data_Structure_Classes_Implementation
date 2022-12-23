cmake_minimum_required(VERSION 3.24)
project(out)

set(CMAKE_CXX_STANDARD 23)


add_executable(out)

target_sources(out PUBLIC
        ./src/main.cpp
        ./include/sll_Queue.hpp
        ./src/sll_Queue.cpp
        ./src/Cqueue.cpp
        ./include/Cqueue.hpp
        ./src/SQueue.cpp
        ./include/SQueue.hpp
        ./src/linkedList.cpp
        ./include/linkedList.hpp
        ./src/stack.cpp include/stack.h
        ./src/sll_stack.cpp
        ./include/sll_stack.hpp)

target_include_directories(out PUBLIC ./include ./src)
