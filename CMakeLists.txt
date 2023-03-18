cmake_minimum_required(VERSION 3.5)

project(CppTask_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppTask_2 main.cpp
    list.h list.cpp
    component.h component.cpp
    label.h label.cpp
    window.h window.cpp
    button.h button.cpp
    panel.h panel.cpp
    line.h line.cpp
)

install(TARGETS CppTask_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
