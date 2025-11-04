cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 23)
set(PROJECT_NAME Grass_Rendering)
project(${PROJECT_NAME})

add_subdirectory(KMiniEngine)

set(SOURCE_FILE GrassRenderingAppMain.cpp)

add_executable(
        ${PROJECT_NAME}
            src/MAIN.cpp
        include/EmptyApp.h
        src/EmptyApp.cpp)

target_include_directories(
        ${PROJECT_NAME}
            PRIVATE
                ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(
        ${PROJECT_NAME}
            PRIVATE
                KMiniEngineLib
)
