cmake_minimum_required(VERSION 4.0)

project(cpp-cmake-catch2)

option(ENABLE_TESTS "" ON)

set(CMAKE CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(cpp-cmake-catch2
    main.cpp
)

if( ENABLE_TESTS )
    add_subdirectory(tests)
endif()
