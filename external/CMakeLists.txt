cmake_minimum_required(VERSION 3.8)

add_library(unity STATIC
  unity/src/unity.c
)

target_include_directories(unity PUBLIC
  unity/src
)