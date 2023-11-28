cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME cpp-cmake-template)

project(${PROJECT_NAME})

add_subdirectory(src)

include_directories(include/)

add_executable(tests
    tests/main/test_main.cpp
    #tests/types/nullptr/test_nullptr.cpp
    tests/types/bool/test_bool.cpp
)

find_package(GTest REQUIRED)

target_link_libraries(tests PRIVATE ${GTEST_BOTH_LIBRARIES} pthread)

add_custom_target(run_tests COMMAND tests)