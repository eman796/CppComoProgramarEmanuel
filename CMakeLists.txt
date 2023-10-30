cmake_minimum_required(VERSION 3.0)

project(TuProyectoC++)

set(CMAKE_CXX_STANDARD 11) # Especifica el estándar de C++ que deseas usar

# Agrega tus archivos fuente aquí
add_executable()

# Si necesitas incluir bibliotecas adicionales, usa target_link_libraries
# target_link_libraries(TuEjecutable nombre_de_la_biblioteca)
add_executable(new_target Mains.cpp
        Mains.cpp)
