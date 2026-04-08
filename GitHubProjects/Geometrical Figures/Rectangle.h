#pragma once
#include "GeometricalFigure.h"
#include "Point.h"
class Rectangle: public GeometricFigure{
private:
    Point a;
    Point b;
    Point c;
    Point d;
    float h, Aside;

    void GetSideH();

void GetSideA();


    public:

    Rectangle();

    Rectangle(float x, float y, float x_h, float y_h, float x_2, float y_2, float xh2, float yh2);

float Perimeter();

float Square();
};