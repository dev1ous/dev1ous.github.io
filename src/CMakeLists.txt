find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

add_library(cours_test
    cours_test.cpp
    ${CMAKE_SOURCE_DIR}/include/cours_test.h
)

target_include_directories(cours_test PUBLIC 
    ${CMAKE_SOURCE_DIR}/include
)

add_executable (${PROJECT_NAME} main.cpp)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    cours_test
    sfml-audio
    sfml-system
    sfml-graphics
    sfml-window
    sfml-network
)
