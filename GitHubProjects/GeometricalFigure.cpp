#include <iostream>
#include <vector>
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

class GeometricFigure{
    private:
    float sides;

    public:
    float virtual Perimeter(){
        int a=0;
        return a;
    }
    float virtual Square(){
        int n=0;
        return n;
    }

    protected:
    float periemter, square;
    
};

class Circle: public GeometricFigure{

private:
float radius;
float perimeter, square;
float pi= 3.14159265;

public:
float Square(){
    square=pi*pow(radius, 2);
    return square;
    }

float Perimeter(){
    perimeter=2*pi*radius;
    return perimeter;
}

Circle (){
    radius=0;
    perimeter=0;
    square=0;
}

Circle(float r){
    radius=r;
}
};

class Triangle: public GeometricFigure{
private:
    Point a;
    Point b;
    Point c;
    float sideA;
    float sideB;
    float sideC;
    float perimeter;

float GetSide(Point a2, Point b2){
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

public:
Triangle(){
    a=Point(0, 0);
    b=Point(0, 0);
    c=Point(0, 0);
    perimeter=0;
    sideA=0;
    sideB=0;
    sideC=0;
}

Triangle(float x, float y, float x_h, float y_h, float x_2, float y_2){ //меняю параметры треугольника 
    a=Point(x, y);
    b=Point(x_h, y_h);
    c=Point(x_2, y_2);
    sideA=GetSide(a, b); //дистанция от точки А до точки В
    sideB=GetSide(b, c); //дистанция от точки В до точки С
    sideC= GetSide(c, a); //дистанция от точки А до точки С
    perimeter=Perimeter();
}

float Square(){
    float p=perimeter/2;
    float square=sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
    return square;
}

float Perimeter(){
    perimeter=sideA+sideB+sideC;
    return perimeter;
}
};

class Rectangle: public GeometricFigure{
private:
    Point a;
    Point b;
    Point c;
    Point d;
    float perimeter;
    float area;
    float h, Aside;

    void GetSideH(){
    //cout << b.y << " " << a.y << endl;
    h=b.y-a.y;
    return;
}

void GetSideA(){
    //cout << c.x << " " << a.x << endl;
    Aside=c.x-a.x;
    return;
}


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
    GetSideH();
    GetSideA();
}

float Perimeter(){
    perimeter=h*2+Aside*2;
    return perimeter;
}

float Square(){
    area=Aside*h;
    return area;
}
};

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