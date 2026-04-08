#include "Triangle.h"
#include <cmath>
float Triangle::GetSide(Point a2, Point b2){
    float dx=b2.x-a2.x;
    float dy=b2.y-a2.y;
    
    //делаем проверку чтобы не получились отрицательные числа
    if (dx<0){
        dx*-1;
    }
    if (dy<0){
        dy*-1;
    }
    float side=sqrt(pow(dx, 2) + pow(dy, 2));
    return side;
}

Triangle::Triangle(){
    a=Point(0, 0);
    b=Point(0, 0);
    c=Point(0, 0);
    perimeter=0;
    sideA=0;
    sideB=0;
    sideC=0;
}

Triangle::Triangle(float x, float y, float x_h, float y_h, float x_2, float y_2){ //меняю параметры треугольника 
    a=Point(x, y);
    b=Point(x_h, y_h);
    c=Point(x_2, y_2);
    sideA=GetSide(a, b); //дистанция от точки А до точки В
    sideB=GetSide(b, c); //дистанция от точки В до точки С
    sideC= GetSide(c, a); //дистанция от точки А до точки С
    perimeter=Perimeter();
}

float Triangle::Square(){
    float p=perimeter/2;
    float square=sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
    return square;
}

float Triangle::Perimeter(){
    perimeter=sideA+sideB+sideC;
    return perimeter;
}