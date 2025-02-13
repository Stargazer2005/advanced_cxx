cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)

set(PROJECT shapelib)
project(${PROJECT})

set(SOURCES
    rectangle.cpp
    circle.cpp
    triangle.cpp
)

set(HEADERS
    shape.h
    rectangle.h
    circle.h
    triangle.h
)

add_library(${PROJECT} SHARED ${SOURCES} ${HEADERS})

install(TARGETS ${PROJECT} DESTINATION ${CMAKE_BINARY_DIR})
