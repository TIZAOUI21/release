cmake_minimum_required(VERSION 3.19)
project(release)

set(CMAKE_CXX_STANDARD 14)

add_executable(release main.cpp cout.cpp cout.h location.h electricite.cpp electricite.h eau.cpp eau.h)