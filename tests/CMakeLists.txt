cmake_minimum_required(VERSION 3.15)
project(clzw_tests)

add_subdirectory(lib)
include_directories(lib/googletest/include)
include_directories(lib/googlemock/include)

add_executable(clzw_tests basic_test.cpp ../sources/LZW.cpp)
target_link_libraries(clzw_tests gtest gtest_main)
target_link_libraries(clzw_tests gmock gmock_main)