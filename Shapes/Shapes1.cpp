#include "Shapes1.hpp"

int Rectangle::rectangleArea(int a, int b)
{
    return a*b;
}

int Rectangle::rectanglePerimeter(int a, int b)
{
    return 2*(a+b);
}

int Triangle::triangleArea(int a, int h)
{
    return (a*h)/2;
}

int Triangle::trianglePerimeter(int a, int b, int c)
{
    return a+b+c;
}

double Circle::circleArea(int r)
{
    return _pi*r*r;
}

double Circle::circlePerimeter(int r)
{
    return 2*(_pi*r);
}
