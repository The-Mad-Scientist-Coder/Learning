#pragma once
#include "Point.h"

class Rectangle{
    private:
    Point a;
    Point b;
    Point c;
    Point d;
    float perimeter;
    float area;
    float h, aside;

    public:
    Rectangle(){
    a=Point(0, 0);
    b=Point(0, 0);
    c=Point(0, 0);
    d=Point(0, 0);
}

    Rectangle(float x, float y, float x_h, float y_h, float x_2, float y_2, float xh2, float yh2);

void GetSideH();

void GetSideA();

float Perimeter();

float Square();

};