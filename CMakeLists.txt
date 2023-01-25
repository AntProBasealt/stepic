cmake_minimum_required(VERSION 3.14)

project(stepic LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)
#find_package(GTest)

add_executable(stepic
    multiple.cpp)

add_executable(string1
    string1.cpp)

add_executable(range
    range.cpp)

add_executable(rotate
    rotate.cpp)

add_executable(str_found1
    str_found1.cpp)

target_link_libraries(stepic PRIVATE Qt5::Core)
#target_include_directories(stepik_tests PRIVATE ${GTEST_INCLUDE_DIRS})

#target_link_libraries(stepik_tests PRIVATE ${GTEST_BOTH_LIBRARIES})

#add_executable(stepik_tests test.cpp)
