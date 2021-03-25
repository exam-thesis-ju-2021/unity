cmake_minimum_required(VERSION 3.8)

file(GLOB SOURCES ./*.c)

add_executable(release ${SOURCES})

target_include_directories(release PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(module_a)