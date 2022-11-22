cmake_minimum_required(VERSION 3.16)
project(cborcpp)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)

set(CXX_STANDARD 14)

set(SOURCE_FILES
        src/encoder.cpp
        src/decoder.cpp
        src/input.cpp
        src/listener_debug.cpp
		src/listener_null.cpp
        src/output_dynamic.cpp
        src/output_static.cpp
        )

set(TEST_SOURCE_FILES
        src/tests.cpp)

add_library(cborcpp STATIC ${SOURCE_FILES})
target_include_directories(cborcpp PUBLIC src)

add_executable(testing ${SOURCE_FILES} ${TEST_SOURCE_FILES})

##add_subdirectory(speedtest)
