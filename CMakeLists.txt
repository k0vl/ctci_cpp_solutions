cmake_minimum_required(VERSION 3.0.0)
project(ReadLastN VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ctci_cpp_solutions main.cpp printlastk.cpp printlastk.hpp)

set_property(TARGET ctci_cpp_solutions PROPERTY CXX_STANDARD 17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
