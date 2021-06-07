cmake_minimum_required (VERSION 2.8.9)

project (GameEngine)

file(GLOB SOURCES "src/*.cpp")

add_executable(GameEngine ${SOURCES})