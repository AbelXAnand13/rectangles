#include "rectangle.h"

rectangle::rectangle() {
    l = 0;
    w = 0;
}
rectangle::rectangle(float length, float width) {
    l = length;
    w = width;
}
rectangle::rectangle(rectangle& E) {
    l = E.l;
    w = E.w;
}
void rectangle::setSides(float length, float width) {
    l = length;
    w = width;
}
float rectangle::getLength() {
    return l;
}
float rectangle::getWidth() {
    return w;
}
float rectangle::getPerimeter() {
    return 2 * (l*w);
}
float rectangle::getArea() {
    return l * w;
}
