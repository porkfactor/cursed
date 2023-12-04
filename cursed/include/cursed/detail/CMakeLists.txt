cmake_minimum_required(VERSION 3.20.0)

list(APPEND SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/curses.hpp
)

set(SOURCES "${SOURCES}" PARENT_SCOPE)