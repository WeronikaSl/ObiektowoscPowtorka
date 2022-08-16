#pragma once

class Rectangle
{
private:
    int _a = 0;
    int _b = 0;
public:
    Rectangle(int a, int b);
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
    Triangle(int a, int b, int c, int h);
    int triangleArea(int a, int h);
    int trianglePerimeter(int a, int b, int c);
};

class Circle
{
private:
    int _r = 0;
    double _pi = 3.14;
public:
    Circle(int r);
    double circleArea(int r);
    double circlePerimeter(int r);
};
