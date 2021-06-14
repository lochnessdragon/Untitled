cmake_minimum_required (VERSION 3.10.2)

include (${CMAKE_SOURCE_DIR}/CMake/DependencyManager.txt)

project (GameEngine)

# setup c++ flags and linked libraries
set(CMAKE_CXX_FLAGS_INIT "-Wall -pedantic")
set(LIBS glfw)

check_dependency(glfw glfwCreateWindow)
# check_dependency(fmt assert_fail) -- fmt

set(DEFINES UT_EXPORTS)

file(GLOB_RECURSE SOURCES "src/*.cpp" "lib/glad/src/*.c")

add_library(GameEngine SHARED ${SOURCES})
target_compile_definitions(GameEngine PRIVATE ${DEFINES})
target_link_libraries(GameEngine ${LIBS})
target_include_directories(GameEngine PRIVATE src/ lib/ lib/glad/include/)
set_property(TARGET GameEngine PROPERTY CXX_STANDARD 17)

#target_precompile_headers(GameEngine PRIVATE src/pch.h)