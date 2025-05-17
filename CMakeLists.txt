cmake_minimum_required(VERSION 3.31)
project(Huraira_Assignment)

set(CMAKE_CXX_STANDARD 20)

add_executable(Huraira_Assignment main.cpp
        Librarycard.h
        Librarycard.cpp
        Librarymember.cpp
        Librarymember.h
        Book.cpp
        Book.h
        Library.cpp
        Library.h)
