cmake_minimum_required(VERSION 3.8)
project(Theads)

set(CMAKE_C_STANDARD 11)

find_package(Threads REQUIRED)

set(SOURCE_FILES main.c)

add_executable(Main ${SOURCE_FILES})

target_link_libraries(Main Threads::Threads)