cmake_minimum_required(VERSION 3.29)

set(CMAKE_GENERATOR
    "Unix Makefiles"
    CACHE STRING "generator"
)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

project(anal
        VERSION 1.1.0
        DESCRIPTION "Arcade Native Agnostic Layer"
        LANGUAGES CXX
)

add_library(anal INTERFACE)
target_include_directories(anal INTERFACE include)

include(cmake/MakeDoc.cmake)

add_subdirectory(dummy)
