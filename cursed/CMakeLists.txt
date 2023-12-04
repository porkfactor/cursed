cmake_minimum_required(VERSION 3.20.0)

project(cursed VERSION 1.0.0)

set(SOURCES "")

add_library(cursed INTERFACE)

add_subdirectory("include")

target_sources(cursed PRIVATE
    "${SOURCES}"
)

target_link_libraries(cursed INTERFACE
    curses
)



