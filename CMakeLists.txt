cmake_minimum_required(VERSION 3.8)

if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

if (POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()

project("cours_test")

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen REQUIRED)

if(DOXYGEN_FOUND)
    file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/docs)

    set(DOXYFILE_OUT ${CMAKE_BINARY_DIR}/Doxyfile)
    
    configure_file(
        ${CMAKE_SOURCE_DIR}/docs/Doxyfile
        ${DOXYFILE_OUT}
        @ONLY
    )

    add_custom_target(docs ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYFILE_OUT}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )
endif()
