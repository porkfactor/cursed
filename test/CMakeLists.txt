cmake_minimum_required(VERSION 3.20.0)

add_executable(test 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_link_libraries(test PRIVATE
    cursed
    curses
)
