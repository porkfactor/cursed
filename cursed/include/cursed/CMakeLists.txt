cmake_minimum_required(VERSION 3.20.0)

list(APPEND SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/basic_widget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basic_window.hpp
)

add_subdirectory("detail")

set(SOURCES "${SOURCES}" PARENT_SCOPE)