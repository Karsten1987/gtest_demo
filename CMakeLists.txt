cmake_minimum_required(VERSION 2.8)
project(gtest_demo)

# gtest_demo include dir
include_directories(include)

# gtest_demo library
add_library(
  gtest_demo
  src/gtest_demo.cpp
)

# gtest_demo app
add_executable(
  gtest_demo_app
  src/main.cpp
)
target_link_libraries(
  gtest_demo_app
  gtest_demo
)

# enable testing
add_subdirectory(gtest-1.7.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# define test files
add_executable(
  gtest_demo_test
  test/gtest_demo_test.cpp
)
target_link_libraries(
  gtest_demo_test
  gtest_demo
  gtest
  gtest_main
)
add_test(gtest_demo_test gtest_demo_test)
