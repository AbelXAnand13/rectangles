#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class rectangle {
public:
    rectangle();
    rectangle(float length, float width);
    rectangle(rectangle& E);
    void setSides(float length, float width);
    float getLength();
    float getWidth();
    float getPerimeter();
    float getArea();
    
private:
    float l, w;
};
