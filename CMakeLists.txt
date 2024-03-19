cmake_minimum_required(VERSION 3.27)
project(sort_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(sort_project main.cpp
        InsertionSort.h
        InsertionSort.cpp
        SortingAlgorithm.h
        SortingAlgorithm.cpp
        ShellSort.h
        ShellSort.cpp
        SelectionSort.h
        SelectionSort.cpp
        HeapSort.h
        HeapSort.cpp
        QuickSort.h
        QuickSort.cpp)
