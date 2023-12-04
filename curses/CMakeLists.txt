cmake_minimum_required(VERSION 3.20.0)

add_library(curses INTERFACE)

add_subdirectory("include")

target_sources(curses PRIVATE "${SOURCES}")


