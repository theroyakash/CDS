cmake_minimum_required(VERSION 3.20)
project(CDS C)

set(CMAKE_C_STANDARD 99)

add_library(CDS SHARED linkedlist.c stacks.c stacks.h tree.c tree.h)
