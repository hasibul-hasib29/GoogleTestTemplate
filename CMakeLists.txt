cmake_minimum_required(VERSION 3.10)
project(gtest_learn)

# Find the GoogleTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the student.cpp and test_student.cpp files
add_executable(myapp myTest.cpp test_case.cpp)

# Link the GTest libraries and pthread
target_link_libraries(myapp GTest::GTest GTest::Main pthread)