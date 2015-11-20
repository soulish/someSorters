cmake_minimum_required(VERSION 3.3)
project(someSorters)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/quickSorter.cpp src/quickSorter.h src/mergeSorter.cpp src/mergeSorter.h src/PriorityQueue.cpp src/PriorityQueue.h src/heapSorter.h)
add_executable(someSorters ${SOURCE_FILES})