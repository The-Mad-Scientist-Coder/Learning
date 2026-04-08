#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
#include "Operators_string.h"
#include "Operators_string.cpp"

using namespace std;

int main(){
string s, s1;
cout << "Please enter a string or a set of characters/letters: ";
cin >> s;
My_String str(s);
cout << "Please enter another string or a set of characters/letters: ";
cin >> s1;
My_String str1(s1);
My_String str2;
str2=str+str1; 
My_String str3;
str3=str==str1;
str3=str!=str1;
str3=str<=str1;
str3=str>=str1;

    return 0;
}