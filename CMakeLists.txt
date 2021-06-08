cmake_minimum_required(VERSION 2.8.9)

option(RETRIEVE_DEPS "Download required dependencies from online repos" off)

project(Untitled)

add_subdirectory(engine/)

add_subdirectory(app/example/)