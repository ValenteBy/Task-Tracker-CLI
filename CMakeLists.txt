cmake_minimum_required(VERSION 3.22.1)

project(Task_Tracker_CLI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main src/main.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

find_package(nlohmann_json REQUIRED)
target_link_libraries(seu_projeto PRIVATE nlohmann_json::nlohmann_json)