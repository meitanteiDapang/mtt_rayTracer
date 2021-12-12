#ifndef PATHTRACING_OBJECT_H
#define PATHTRACING_OBJECT_H

#include "BoundingBox.h"


constexpr float PI = 3.1415926;

/*
    An abstract class for all kinds of objects.
*/

class Object
{
public:
    Object(){};
    virtual ~Object(){};


    virtual BoundingBox getBoundingBox() = 0;
    virtual float getSurfaceArea() = 0;

};


#endif