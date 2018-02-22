SET(PROJECT_NAME duck-base-gtest)
PROJECT(${PROJECT_NAME})

MESSAGE(STATUS "project name: " ${PROJDECT_NAME})

ENABLE_TESTING()

FIND_PACKAGE(Threads)

cmake_minimum_required(VERSION 2.8)

#SET(EXECUTABLE_OUTPUT_PATH ${PROJDECT_BINARY_PATH}/bin)
#SET(LIBRARY_OUTPUT_PATH ${PROJDECT_BINARY_PATH}/lib)

INCLUDE_DIRECTORIES(/usr/local/include 
					/usr/include 
					/home/mark/project/duckling/src)

LINK_DIRECTORIES(/usr/local/lib /usr/lib)

ADD_EXECUTABLE(mainUnittest mainUnittest.cpp)

TARGET_LINK_LIBRARIES(mainUnittest libgtest.a)
TARGET_LINK_LIBRARIES(mainUnittest libgtest_main.a)
TARGET_LINK_LIBRARIES(mainUnittest pthread)
