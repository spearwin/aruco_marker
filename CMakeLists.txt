cmake_minimum_required(VERSION 2.8)
project(Marker_Generate)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Marker_Generate marker_generate.cpp)
target_link_libraries(Marker_Generate ${OpenCV_LIBS})