#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <string>

using namespace std;

int main(){
    Point rec1;
    rec1=Point(0,0);
    Point rec2;
    rec2=Point(0,0);
    Point rec3;
    rec3=Point(0,0);
    Point rec4;
    rec4=Point(0,0);
    Point tri1;
    tri1=Point(0,0);
    Point tri2;
    tri2=Point(0,0);
    Point tri3;
    tri3=Point(0,0);
    float radius1;
    cout << "Hello! Can you please enter the data needed to create Geometrical Shapes? ";
    cout << "Please enter the coordinates to form a rectangle: " << endl;
    cout << "First point: " << endl;
    cout << " x: ";
    cin >> rec1.x;
    cout << " y: ";
    cin >> rec1.y;
    cout << endl;
    cout << "First heigth: " << endl;
    cout << " x: ";
    cin >> rec2.x;
    cout << " y: ";
    cin >> rec2.y;
    cout << endl;
    cout << "Second point: " << endl;
    cout << " x: ";
    cin >> rec3.x;
    cout << " y: ";
    cin >> rec3.y;
    cout << endl;
    cout << "Second heigth: " << endl;
    cout << " x: ";
    cin >> rec4.x;
    cout << " y: ";
    cin >> rec4.y;
    cout << endl;
    cout << "Please, now enter the coordinates that are necessary to form a triangle" << endl;
    cout << "First point: " << endl;
    cout << " x: ";
    cin >> tri1.x;
    cout << " y: ";
    cin >> tri1.y;
    cout << endl;
    cout << "First heigth: " << endl;
    cout << " x: ";
    cin >> tri2.x;
    cout << " y: ";
    cin >> tri2.y;
    cout << endl;
    cout << "Third point: " << endl;
    cout << " x: ";
    cin >> tri3.x;
    cout << " y: ";
    cin >> tri3.y;
    cout << endl;
    cout << "And finally, the radius for the circle! ";
    cin >> radius1;

    Triangle triangle1(tri1.x, tri1.y, tri2.x, tri2.y, tri3.x, tri3.y);
    Rectangle rectangle1(rec1.x, rec1.y, rec2.x, rec2.y, rec3.x, rec3.y, rec4.x, rec4.y);
    Circle circle1(radius1);
    float rec_perimeter, rec_square, tri_perimeter, tri_square, cir_perimeter, cir_square;
    tri_perimeter=triangle1.Perimeter();
    tri_square=triangle1.Square();
    rec_square=rectangle1.Square();
    rec_perimeter=rectangle1.Perimeter();
    cir_square=circle1.Square();
    cir_perimeter=circle1.Perimeter();
    cout << "Square of the rectangle: " << rec_square << "  "; 
    cout << "Perimeter of the rectangle: " << rec_perimeter << endl;
    cout << "Square of the triangle: " << tri_square << "  ";
    cout << "Perimeter of the triangle: " << tri_perimeter << endl;
    cout << "Square of the circle: " << cir_square << "  ";
    cout << "Perimeter of the circle: " << cir_perimeter << endl;

    return 0;
}