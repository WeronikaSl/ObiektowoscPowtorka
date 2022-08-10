#pragma once

class Rectangle
{
private:
    int _a = 0;
    int _b = 0;
public:
    int rectangleArea(int a, int b);
    int rectanglePerimeter(int a, int b);
};

class Triangle
{
private:
    int _a = 0;
    int _b = 0;
    int _c = 0;
    int _h = 0;
public:
    int triangleArea(int a, int h);
    int trianglePerimeter(int a, int b, int c);
};

class Circle
{
private:
    int _r = 0;
    double _pi = 3.14;
public:
    double circleArea(int r);
    double circlePerimeter(int r);
};
