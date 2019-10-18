cmake_minimum_required(VERSION 3.7.2)

project(tp2 VERSION 1.0 LANGUAGES CXX)

# compilation c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ref
  ref.cpp
  )

add_executable(test_algebra
  test_algebra.cpp
  )

add_executable(test_performances
  test_performances.cpp
  )
