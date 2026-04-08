#pragma once
#include "rectangle.h"
#include "Point.h"
#include <cmath>

Rectangle::Rectangle(){
    a=Point(0, 0);
    b=Point(0, 0);
    c=Point(0, 0);
    d=Point(0, 0);
}

    Rectangle::Rectangle(float x, float y, float x_h, float y_h, float x_2, float y_2, float xh2, float yh2){ //меняю параметры прямоугольника 
    a=Point(x, y);
    b=Point(x_h, y_h);
    c=Point(x_2, y_2);
    d=Point(xh2, yh2);
}

void Rectangle::GetSideH(){
    //cout << b.y << " " << a.y << endl;
    h=b.y-a.y;
    return;
}

void Rectangle::GetSideA(){
    //cout << c.x << " " << a.x << endl;
    aside=c.x-a.x;
    return;
}

float Rectangle::Perimeter(){
    perimeter=h*2+aside*2;
    return perimeter;
}

float Rectangle::Square(){
    area=aside*h;
    return area;
}
