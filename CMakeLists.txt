cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project (core CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(src/)

find_package(uWebSockets REQUIRED)
find_package(nlohmann_json REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main uwebsockets::uwebsockets)
target_link_libraries(main nlohmann_json::nlohmann_json)