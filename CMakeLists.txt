cmake_minimum_required(VERSION 3.20)
project(Lab6)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Equivale a QT_NO_DEPRECATED_WARNINGS de la guía (Paso 5)
add_compile_definitions(QT_NO_DEPRECATED_WARNINGS)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(Lab6
        main.cpp
        Lab6.cpp
        Lab6.h
        Lab6.ui
        Lab6.h
        Lab6.cpp
)

target_link_libraries(Lab6 PRIVATE Qt6::Widgets)