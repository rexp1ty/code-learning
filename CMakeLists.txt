cmake_minimum_required(VERSION 3.0.0)
project(vscode-llvm-cpp VERSION 0.1.0)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-g -Wall -static-libgcc --target=x86_64-w64-mingw -std=c++17")

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(main ${files})

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/build)