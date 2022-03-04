//Abel Anand
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
#include "rectangle.h"
int main() {
rectangle rec;
int length;
int width;
cout << "Bruh, enter a length like rn\n";
cin >> length;
cout << "Width bro\n";
cin >> width;
rec.setSides(length, width);
cout << "Circumference = " << rec.getPerimeter() << "\nArea = " << rec.getArea() << endl;
    }
