cmake_minimum_required(VERSION 3.0)
project(BoostExamples) # sets PROJECT_NAME and others

set(CMAKE_CXX_STANDARD 11) # equivalent to flag -std=c++11 below
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g2 -O2 -fno-strict-aliasing")

# Create binary inside src dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

# Create executable
FILE( GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )
#set(SOURCE_FILES main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Find Boost
set(BOOST_COMPONENTS system filesystem) # system is mandatory component
FIND_PACKAGE(Boost 1.54.0 COMPONENTS ${BOOST_COMPONENTS} REQUIRED)

# Include options
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})

# Links options
set(LIBRARIES ${Boost_LIBRARIES})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${LIBRARIES})