cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(hello CXX)

add_library(libhello SHARED hello.cxx hello.hh)
set_target_properties(lib${PROJECT_NAME} PROPERTIES
  OUTPUT_NAME ${PROJECT_NAME}
  )

add_executable(${PROJECT_NAME} main.cxx)
target_link_libraries(${PROJECT_NAME} lib${PROJECT_NAME})

include(CTest)

add_subdirectory(catch2)

add_executable(hello_tests hello_tests.cxx)
target_link_libraries(hello_tests libhello Catch2::Catch2)

include(catch2/contrib/Catch.cmake)

catch_discover_tests(hello_tests)
