cmake_minimum_required(VERSION 3.20.0)

add_subdirectory("cursed")

target_include_directories(cursed INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

set(SOURCES "${SOURCES}" PARENT_SCOPE)