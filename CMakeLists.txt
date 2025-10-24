cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 23)
set(PROJECT_NAME Grass_Rendering)
project(${PROJECT_NAME})

add_subdirectory(vendor/KMiniEngine)

set(SOURCE_FILE GrassRenderingAppMain.cpp)

add_executable(
        ${PROJECT_NAME}
            src/GrassRenderingAppMain.cpp)

target_link_libraries(
        ${PROJECT_NAME}
            PRIVATE
                KMiniEngineLib
)
