cmake_minimum_required(VERSION 3.27)
project(start)
set(APP_SOURCES main.cpp)
#add_executable(${PROJECT_NAME} ${APP_SOURCES})
add_definitions(-O3 -Wall -pedantic -fPIC -c -W -std=c++17 )



file(GLOB_RECURSE LIB_SOURCES "source/*.cpp")
add_library(LIB_ORCS STATIC ${LIB_SOURCES})
target_include_directories(LIB_ORCS PUBLIC include)
set_target_properties(LIB_ORCS PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_compile_features(LIB_ORCS PUBLIC cxx_std_20)

add_executable(${PROJECT_NAME} "app/main.cpp")
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC LIB_ORCS)

# add_executable(Start1 "app/prototype1.cpp")
# target_include_directories(Start1 PUBLIC include)
# target_link_libraries(Start1 PUBLIC LIB_ORCS)

find_package(Catch2 REQUIRED)
set(PROJECT_TEST_NAME unit_test)
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
add_executable(${PROJECT_TEST_NAME} ${TEST_SOURCES})
target_include_directories(${PROJECT_TEST_NAME} PUBLIC include)
target_link_libraries(${PROJECT_TEST_NAME} PRIVATE LIB_ORCS Catch2::Catch2)
include(CTest)
include(Catch)
catch_discover_tests(${PROJECT_TEST_NAME})



#find_package(Catch2 REQUIRED)
#set(PROJECT_TEST_NAME unit_test)
#file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
#add_executable(${PROJECT_TEST_NAME} ${TEST_SOURCES})
#target_include_directories(${PROJECT_TEST_NAME} PUBLIC include)
#target_link_libraries(${PROJECT_TEST_NAME} PUBLIC LIB_ORCS Catch2::Catch2)
#include(CTest)
#include(Catch)
#catch_discover_tests(${PROJECT_TEST_NAME})

