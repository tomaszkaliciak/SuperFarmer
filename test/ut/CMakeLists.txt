ADD_EXECUTABLE(ut test_main.cpp)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

target_link_libraries(ut gtest gtest_main)

add_test(NAME ut
         COMMAND ut)

