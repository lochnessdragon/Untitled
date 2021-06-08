cmake_minimum_required (VERSION 2.8.9)

project (GameEngine)

# setup c++ flags and linked libraries
set(CMAKE_CXX_FLAGS_INIT "-Wall -pedantic")
set(LIBS fmt)
set(DEFINES UT_EXPORTS)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(GameEngine ${SOURCES})
target_compile_definitions(GameEngine PRIVATE ${DEFINES})
target_link_libraries(GameEngine ${LIBS})