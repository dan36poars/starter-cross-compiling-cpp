cmake_minimum_required(VERSION 3.0)

project(
    multiFiles
    VERSION 1.0.0
    DESCRIPTION "linking multi-files to a project"
    LANGUAGES CXX
)

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_EXE_LINKER_FLAGS " -static")

# include the *.cpp files
add_executable(
    app main.cpp
    src/Vector.cpp
)

target_compile_features(
    app PRIVATE cxx_std_11
)

target_link_libraries(
    app PRIVATE
    -static-libgcc
    -static-libstdc++
)

# includes the header files
# template classes added only you folder
target_include_directories(
    app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)