add_subdirectory(SDL)

add_library(thirdparty INTERFACE)
target_link_libraries(thirdparty INTERFACE SDL3::SDL3)