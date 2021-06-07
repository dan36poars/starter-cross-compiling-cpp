cmake_minimum_required(VERSION 3.0.0)

project(wx)

set(CMAKE_CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED TRUE)

# STATIC linker for windows
# set(CMAKE_EXE_LINKER_FLAGS " -static")

add_subdirectory(include)

add_executable( 
    ${PROJECT_NAME}
    main.cpp
)

target_compile_features(
    ${PROJECT_NAME} PRIVATE cxx_std_11
)

target_link_libraries(
    ${PROJECT_NAME} PRIVATE Include
    # uncomment below commmands to compile FOR WINDOWS
    # PRIVATE -static-libgcc
    # PRIVATE -static-libstdc++
)

# target_include_directories(
#     ${PROJECT_NAME} PRIVATE
#     "${PROJECT_BINARY_DIR}"
#     "${PROJECT_SOURCE_DIR}/include"
# )