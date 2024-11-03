cmake_minimum_required(VERSION 3.0)
project(BookLibraryProject)

set(CMAKE_CXX_STANDARD 17)

add_library(BookLibrary src/BookLibrary.cpp)
add_executable(Main src/main.cpp)

target_link_libraries(Main BookLibrary)
