cmake_minimum_required(VERSION 3.13)

# option(test "Build all tests." ON)

project(game)

add_subdirectory(SuperFarmer/src)
add_subdirectory(SuperFarmer)
# if (test)
# 	enable_testing()
# 	add_subdirectory(test/ut)
# endif()

