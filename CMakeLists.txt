cmake_minimum_required(VERSION 4.2)
project(SDLuna)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find_library(opengl REQUIRED)

add_subdirectory(thirdparty)
add_subdirectory(src)

target_link_libraries(${PROJECT_NAME} PUBLIC)