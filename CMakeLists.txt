cmake_minimum_required(VERSION 3.2)

project(homework_1 VERSION 0.0.1)

configure_file(version.h.in ${PROJECT_SOURCE_DIR}/version.h)

add_library(helloworld_lib lib.cpp)

add_executable(helloworld main.cpp)

target_link_libraries(helloworld helloworld_lib)	
