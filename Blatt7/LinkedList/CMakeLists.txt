cmake_minimum_required(VERSION 3.8)
project(LinkedList)

set(CMAKE_C_STANDARD 11)

file(GLOB SOURCES *.c)
file(GLOB HEADR *.h)
add_executable(LinkedList ${SOURCES} ${HEADR})