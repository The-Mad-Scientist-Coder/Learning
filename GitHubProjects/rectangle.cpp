#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point{
    float x;
    float y;


Point(){
    x=0;
    y=0;
}

    Point(float x1, float y1){
        x=x1;
        y=y1;
    }
};

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

    Rectangle(float x, float y, float x_h, float y_h, float x_2, float y_2, float xh2, float yh2){ //меняю параметры прямоугольника 
    a=Point(x, y);
    b=Point(x_h, y_h);
    c=Point(x_2, y_2);
    d=Point(xh2, yh2);
}

void GetSideH(){
    //cout << b.y << " " << a.y << endl;
    h=b.y-a.y;
    return;
}

void GetSideA(){
    //cout << c.x << " " << a.x << endl;
    aside=c.x-a.x;
    return;
}

float Perimeter(){
    perimeter=h*2+aside*2;
    return perimeter;
}

float Square(){
    area=aside*h;
    return area;
}

};


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