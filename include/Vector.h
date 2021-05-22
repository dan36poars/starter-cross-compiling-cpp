/**
 * @file Vector.h
 * @author Daniel Corrêa
 * @brief 
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021 
 */

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>

class Vector
{
private:
    /* data */

public:
    // constructors/Destructors
    Vector();
    ~Vector();

    // public data
    long double x, y;

    // functions
    /**
     * @brief add two numbers with differents types
     * and return the first primary parameter passed to
     * function
     * 
     * @tparam T 
     * @tparam U 
     * @param a 
     * @param b 
     * @return T 
     */
    template <class T, class U>
    T sum(T a, U b)
    {
        return a + b;
    }

    /**
     * @brief Multiply two numbers and return the first type
     * parameter passed to function
     * 
     * @tparam T 
     * @tparam U 
     * @param a 
     * @param b 
     * @return T 
     */
    template <class T, class U>
    T multiply(T a, U b)
    {
        return a * b;
    }

    /**
     * @brief subtraction two numbers and return the first type
     * parameter passed to function
     * 
     * @tparam T 
     * @tparam U 
     * @param a 
     * @param b 
     * @return T 
     */
    template <class T, class U>
    T subtract(T a, U b)
    {
        return a - b;
    }

    /**
     * @brief divide two numbers and return the first type
     * parameter passed to function
     * 
     * @tparam T 
     * @tparam U 
     * @param a 
     * @param b 
     * @return T 
     */
    template <class T, class U>
    T divide(T a, U b)
    {
        if (
            b == 0 or
            b == 0.0 or
            b == 0L or
            b == 0.0L or
            b == 0.f)
        {
            std::cout << "Divide by zero non-allowed" << std::endl;
            return -1;
        }
        else
        {
            return a / b;
        }
    }

    Vector &operator=(const Vector &param);
};

#endif // __VECTOR_H__