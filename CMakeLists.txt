# Set the minimum required version of CMake to 3.10
cmake_minimum_required(VERSION 3.10)

# Create a project
project(Calculator)

# Add an executable to the project
add_executable(Calculator Calculator/Calc.cpp)
