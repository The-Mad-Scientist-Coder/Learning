#include "Circle.h"
#include <cmath>
float Circle::Square(){
    square=pi*pow(radius, 2);
    return square;
    }

float Circle::Perimeter(){
    perimeter=2*pi*radius;
    return perimeter;
}

Circle::Circle (){
    radius=0;
    perimeter=0;
    square=0;
}

Circle::Circle(float r){
    radius=r;
}