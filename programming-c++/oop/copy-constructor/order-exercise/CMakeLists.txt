cmake_minimum_required(VERSION 3.25)

project(copy-constructor-order LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(./)
add_executable(test test.cpp product.cpp line.cpp order.cpp)

target_link_libraries(test PRIVATE gtest gtest_main pthread)
