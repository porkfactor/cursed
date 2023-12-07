cmake_minimum_required(VERSION 3.20.0)

list(APPEND SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/button.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/color.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/composite.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/control.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/cursed.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/device.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/display.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/label.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/point.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/rectangle.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/scrollable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/table.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/text.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/widget.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/window.hpp

)

add_subdirectory("detail")

set(SOURCES "${SOURCES}" PARENT_SCOPE)