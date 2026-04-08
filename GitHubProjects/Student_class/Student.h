#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Student{

private:
    string name;
    string grade;
    string school;
    vector <int> grades;
    float totalgrades;


public:
Student();

Student(string grade_, string school_, string name_);

vector <int> NewGrade(float newgg);

float MediumGrade();

string Class();

string SchoolName();
};