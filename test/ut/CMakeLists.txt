file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(ut ${SRCS})

TARGET_LINK_LIBRARIES(ut
    superFarmer
    ${GTEST_BOTH_LIBRARIES}
)

add_test(NAME ut
         COMMAND ut)

# add_custom_command(
#     TARGET ut
#     COMMENT "Run tests"
#     POST_BUILD 
#     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
#     COMMAND ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> -R ut --output-on-failure
# )