add_executable(${PROJECT_NAME})

set(SOURCE_FILES
    SDLuna.cpp
    interfaces/render/rendering_interface.hpp
    interfaces/render/rendering_interface.cpp
    test/test.cpp
    test/test.hpp)

target_sources(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE thirdparty)