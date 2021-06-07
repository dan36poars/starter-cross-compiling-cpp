#include "Vector.h"
Vector::Vector()
{
}

Vector::~Vector()
{
}

/**
 * @brief copy the Vector to another Vector class
 * 
 * @param param 
 * @return Vector& 
 */
Vector &Vector::operator=(const Vector &param)
{
    this->x = param.x;
    this->y = param.y;
    return *this;
}
