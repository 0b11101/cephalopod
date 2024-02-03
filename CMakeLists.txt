cmake_minimum_required(VERSION 3.20) # Specify the minimum version of CMake

project(cephalopod) # Name your project

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Specify the target executable
add_executable(cephalopod ${SOURCES})
