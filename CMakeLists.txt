cmake_minimum_required(VERSION 3.26)
project(CppComoProgramarEmanuel)

set(CMAKE_CXX_STANDARD 14)

include_directories("C20 - Estructura de datos/C�digo")

add_executable(CppComoProgramarEmanuel
        C2-Introduccion/F1_HelloWorld.cpp
        "C20 - Estructura de datos/C�digo/Main.cpp"
        "C20 - Estructura de datos/C�digo/Main.h"
        main.cpp)
