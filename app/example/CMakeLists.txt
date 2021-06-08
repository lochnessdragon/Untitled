cmake_minimum_required(VERSION 2.8.9)

project(Example)

# grab sources 
file(GLOB_RECURSE SOURCES "*.cpp")

# include directories
set(INC_DIRS ${CMAKE_SOURCE_DIR}/engine/src)

# linked libraries
set(LIBS GameEngine)

add_executable(Example ${SOURCES})
target_include_directories(Example PRIVATE ${INC_DIRS})

target_link_libraries(Example ${LIBS})