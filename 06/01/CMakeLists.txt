cmake_minimum_required(VERSION 3.20.0)
project(Less VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB project
    src/*
)
add_executable(Less ${project})
