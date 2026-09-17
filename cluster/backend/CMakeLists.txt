cmake_minimum_required(VERSION 3.20)

project(HelloDrogon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Drogon CONFIG REQUIRED)

add_executable(hello_server
        src/main.cpp
)

target_link_libraries(hello_server
        PRIVATE Drogon::Drogon
)