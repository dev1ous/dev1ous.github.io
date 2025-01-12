find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

file(GLOB SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable (${PROJECT_NAME} ${SRC_DIR})

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(${PROJECT_NAME} PRIVATE
    sfml-audio
    sfml-system
    sfml-graphics
    sfml-window
    sfml-network
)
