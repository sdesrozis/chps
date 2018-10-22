cmake_minimum_required(VERSION 3.7.2)

project(test VERSION 1.0 LANGUAGES CXX)

# compilation c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(test SHARED foo.cpp bar.cpp)

add_executable(main1 main.cpp)
target_link_libraries(main1 PUBLIC test)

add_executable(main2 main.cpp)
target_link_libraries(main2 PUBLIC test)


