cmake_minimum_required(VERSION 3.27)
project(start)
set(APP_SOURCES main.cpp)
add_executable(${PROJECT_NAME} ${APP_SOURCES})
add_definitions(-O3 -Wall -pedantic -fPIC -c -W -std=c++17 )

find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main
add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
