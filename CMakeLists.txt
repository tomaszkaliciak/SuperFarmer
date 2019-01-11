cmake_minimum_required(VERSION 3.13)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(test "Build all tests." ON)

project(game)

add_subdirectory(SuperFarmer/src)
add_subdirectory(SuperFarmer)

if (test)
    enable_testing()
    find_package(GTest REQUIRED)
    include_directories(${GTEST_INCLUDE_DIRS})
    add_subdirectory(test/ut)
endif()

