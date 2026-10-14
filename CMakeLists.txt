cmake_minimum_required(VERSION 3.20)
project(progra1_lab6)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_compile_definitions(QT_NO_DEPRECATED_WARNINGS)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(progra1_lab6
        main.cpp
        Lab6.cpp
        Lab6.h
        Lab6.ui
)

target_link_libraries(progra1_lab6 PRIVATE Qt6::Widgets)