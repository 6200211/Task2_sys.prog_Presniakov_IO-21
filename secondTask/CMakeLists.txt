cmake_minimum_required(VERSION 3.10)
project(secondTask CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDART_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(SRC_FILES src/operations.cpp)  
set(MAIN_FILES src/main.cpp)        

include_directories(include)

add_library(calculator STATIC src/calculator.cpp)

add_executable(secondTask src/main.cpp)
target_link_libraries(secondTask calculator)
