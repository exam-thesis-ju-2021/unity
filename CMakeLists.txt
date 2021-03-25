# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required(VERSION 3.8)
project("Thesis/Unity" C)

set(TARGET_GROUP production CACHE STRING "What Should I Build?")






add_subdirectory(src)

if(TARGET_GROUP STREQUAL release)
elseif(TARGET_GROUP STREQUAL production)
elseif(TARGET_GROUP STREQUAL test)
	include(CTest)

	add_subdirectory(external)
	add_subdirectory(test) 
else() 
  message(FATAL_ERROR "Unrecognized TARGET_GROUP=${TARGET_GROUP}")
endif()
