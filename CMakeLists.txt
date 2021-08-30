cmake_minimum_required(VERSION 3.20)
project(Kurohige)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")

add_executable(Kurohige main.cpp)