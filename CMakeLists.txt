cmake_minimum_required(VERSION 4.2)
project(SDLuna)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_SHARED_LINKER_FLAGS "-lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi")

add_subdirectory(thirdparty)
add_subdirectory(src)