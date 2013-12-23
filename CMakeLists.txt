cmake_minimum_required(VERSION 2.6)

option(test "Build all tests." OFF) # Makes boolean 'test' available.

set(PROJECT_NAME RemoteControl)
project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_FLAGS "-g -Wall")
add_subdirectory(src)

#add_library(project1_lib project1.cpp)
#add_executable(project1 main.cpp)
#target_link_libraries(project1 project1_lib)

if (test)
	include(CTest)
    enable_testing()
    include_directories(${gtest_SOURCE_DIR}/include $ {gtest_SOURCE_DIR})
endif()
