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

#add_executable(example
#    example.cpp)

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

add_executable(getline1
    getline1.cpp)

add_executable(2_7matrixM
    matrixM.cpp)

add_executable(2_6_resize
    2_6_resize.cpp)

add_executable(3_3_string
    3_3_string.cpp)

add_executable(3_3_string_destr
    3_3_string_destr.cpp)

add_executable(2_6_getline
    2_6_getline.cpp)

add_executable(2_7_2d_arr
    2_7_2d_arr.cpp)

add_executable(3_3_string_append
    3_3_string_append.cpp)

add_executable(3_5_modificator
    3_5_modificator.cpp)

#add_executable(3_6_const.cpp
#    3_6_const.cpp)

#add_executable(get_address
#    get_address.cpp)

add_executable(3_7_memory
    3_7_memory.cpp)

add_executable(3_7_constructor
    3_7_constructor.cpp)

target_link_libraries(stepic PRIVATE Qt5::Core)
#target_include_directories(stepik_tests PRIVATE ${GTEST_INCLUDE_DIRS})

#target_link_libraries(stepik_tests PRIVATE ${GTEST_BOTH_LIBRARIES})

#add_executable(stepik_tests test.cpp)
