#pragma once
#include <iostream>
#include <string>

using namespace std;

class My_String{
    private:
    string smth;
    bool found_diff=false;

    public:

    My_String();

    My_String(string n);


    My_String operator+(My_String a);

    My_String operator==(My_String a);

    My_String operator!=(My_String a);

    My_String operator<=(My_String a);

    My_String operator>=(My_String a);
};