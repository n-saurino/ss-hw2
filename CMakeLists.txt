cmake_minimum_required(VERSION 3.5.0)
project(ss-hw2 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ss-hw2 main.cpp)

# Set C++17 standard
set_target_properties(ss-hw2 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES)