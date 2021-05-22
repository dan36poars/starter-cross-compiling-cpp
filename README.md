# Started Cross-compiling C++ using Cmake

### This template can build linux and windows target.
### the toolchain is used by cmake to compile window programs using x86_64-w64-mingw32 compiler.
<br>

## Build-System with CMake for linux

Can Config the build-system by CMake-Gui or CMake command-line. The ninja can help you to generate the config too.
<br>
<br>

Config Build:
    
    cmake -S . -B ./build


Build:
    
    cmake --build ./build/

run:
    
    ./build/<name-your-program>

<br>

## Build-System with CMake for Windows

Type the following code:
    
    mkdir build | cmake -S ./ -B build/ -DCMAKE_TOOLCHAIN_FILE=x86_64-w64-mingw32.cmake

building:

    cmake --build ./build/


<br>
<br>
<br>
Let's together build fun codes! 2021. 🚀