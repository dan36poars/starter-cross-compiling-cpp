/**
 * @file String2.h
 * @author Daniel Corrêa
 * @brief Template Classes don't need be added in 
 * CMakelists.txt to build. only need add your header
 * local folder on target_include_directories command
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STRING2_H__
#define __STRING2_H__

#include <iostream>

template <class T>
class String2
{
private:
    /* data */
    T _x;

public:
    String2(T _a);
    ~String2();

    // functions
    void hello();
};

#include "String2.cpp"

#endif // __STRING2_H__