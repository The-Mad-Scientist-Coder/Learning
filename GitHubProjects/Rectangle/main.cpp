#pragma once
#include <iostream>
#include <cmath>
#include "rectangle.h"
#include <vector>

using namespace std;


int main(){
float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Please enter the coordinates to form a rectangle: " << endl;
    cout << "First point: " << endl;
    cout << " x: ";
    cin >> x1;
    cout << " y: ";
    cin >> y1;
    cout << endl;
    cout << "First heigth: " << endl;
    cout << " x: ";
    cin >> x2;
    cout << " y: ";
    cin >> y2;
    cout << endl;
    cout << "Second point: " << endl;
    cout << " x: ";
    cin >> x3;
    cout << " y: ";
    cin >> y3;
    cout << endl;
    cout << "Second heigth: " << endl;
    cout << " x: ";
    cin >> x4;
    cout << " y: ";
    cin >> y4;
    cout << endl;

    Rectangle rec(x1, y1, x2, y2, x3, y3, x4, y4);
    float h;
    float a;
    rec.GetSideH();
    rec.GetSideA();
    float perimeter=rec.Perimeter();
    float square=rec.Square();
    cout << "The perimeter of this rectangle you've created equals: " << perimeter << endl;
    cout << "The area/square length of this rectangle you've created equals: " << square << endl;
    return 0;
}