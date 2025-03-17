cmake_minimum_required(VERSION 3.29)

project(anal
        VERSION 1.0
        DESCRIPTION "Arcade Native Agnostic Layer"
        LANGUAGES CXX
)

add_library(anal INTERFACE)
target_include_directories(anal INTERFACE include)

add_subdirectory(dummy)
