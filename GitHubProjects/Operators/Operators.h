#pragma once
#include <iostream>

using namespace std;

class Complex_Numbers{
    private:
    float num;

    public:
    Complex_Numbers();

    Complex_Numbers(float a);

    float Console_out();

    Complex_Numbers operator+(Complex_Numbers b);

    Complex_Numbers operator-(Complex_Numbers b);

    Complex_Numbers operator*(Complex_Numbers b);

    Complex_Numbers operator/(Complex_Numbers b);

    Complex_Numbers operator==(Complex_Numbers b);

    Complex_Numbers operator!=(Complex_Numbers b);

};