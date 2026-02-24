add_subdirectory(SDL)

add_library(thirdparty INTERFACE)
find_package(OpenGL REQUIRED)
target_link_libraries(thirdparty INTERFACE SDL3::SDL3 OpenGL::GL)