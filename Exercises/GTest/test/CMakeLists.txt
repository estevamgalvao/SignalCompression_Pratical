cmake_minimum_required(VERSION 3.8)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories("../include")
# include_directories("../src")
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests sqrt_test.cpp ../src/sqrt.cpp) # Era só colocar do lado do sqrt_test.cpp

target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)