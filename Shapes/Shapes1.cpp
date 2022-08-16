#include "Shapes1.hpp"

Rectangle::Rectangle(int a, int b) : _a(a), _b(b)
{
}

int Rectangle::rectangleArea(int a, int b)
{
    return a*b;
}

int Rectangle::rectanglePerimeter(int a, int b)
{
    return 2*(a+b);
}

Triangle::Triangle(int a, int b, int c, int h) : _a(a), _b(b), _c(c), _h(h)
{
}

int Triangle::triangleArea(int a, int h)
{
    return (a*h)/2;
}

int Triangle::trianglePerimeter(int a, int b, int c)
{
    return a+b+c;
}

Circle::Circle(int r) : _r(r)
{
}

double Circle::circleArea(int r)
{
    return _pi*r*r;
}

double Circle::circlePerimeter(int r)
{
    return 2*(_pi*r);
}
