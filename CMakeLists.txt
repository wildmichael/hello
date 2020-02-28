cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(hello CXX)

add_library(libhello SHARED hello.cxx hello.hh)
set_target_properties(lib${PROJECT_NAME} PROPERTIES
  OUTPUT_NAME ${PROJECT_NAME}
  )

add_executable(${PROJECT_NAME} main.cxx)
target_link_libraries(${PROJECT_NAME} lib${PROJECT_NAME})

include(CTest)

find_package(Catch2 REQUIRED)
include(Catch)

add_executable(hello_tests hello_tests.cxx)
target_link_executable(hello_tests libhello Catch2::Catch2)

catch_discover_tests(hello_tests)
