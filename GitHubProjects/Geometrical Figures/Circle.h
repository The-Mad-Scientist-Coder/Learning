#pragma once
#include "GeometricalFigure.h"

class Circle: public GeometricFigure{
private:
float radius;
float pi= 3.14159265;

public:
float Square();

float Perimeter();

Circle ();

Circle(float r);
};