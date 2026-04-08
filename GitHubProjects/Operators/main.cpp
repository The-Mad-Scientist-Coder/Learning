#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Operators.h"
#include "Operators.cpp"

using namespace std;


int main(){
    float n;
    cout << "Enter a complex number: ";
    cin >> n;
    Complex_Numbers n1(n);
    cout << "Enter another complex number: ";
    cin >> n;
    Complex_Numbers n2(n);
    Complex_Numbers n3;
    n3=n1+n2;
    //Complex_Numbers sees n3= n1.operator+(n2) - выживается функция оператор+ и посылает туда значение n2
    n3=n1-n2;
    n3=n1*n2;
    n3=n1/n2;
    Complex_Numbers n4;
    n4=n2==n1;
    n4=n2!=n1;
    return 0;
}