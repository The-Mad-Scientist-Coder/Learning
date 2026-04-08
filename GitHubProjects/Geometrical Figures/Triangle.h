#pragma once
#include "GeometricalFigure.h"
#include "Point.h"
class Triangle: public GeometricFigure{
private:
    Point a;
    Point b;
    Point c;
    float sideA;
    float sideB;
    float sideC;

float GetSide(Point a2, Point b2);

public:
Triangle();

Triangle(float x, float y, float x_h, float y_h, float x_2, float y_2);

float Square();

float Perimeter();
};