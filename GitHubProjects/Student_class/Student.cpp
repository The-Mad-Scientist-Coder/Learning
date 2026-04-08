#pragma once
#include "Student.h"

Student::Student(){
        grade="9A";
        school="MSK 55";
        grades={5, 5, 4, 3, 5, 4};
    }

    Student::Student(string grade_, string school_, string name_){
        vector <int> grds;
        grade=grade_;
        school=school_;
        name=name_;
        int n;
        int a;
        cout << "Plesase enter how many grades does your student have: ";
        cin >> n;
        cout << "Now please enter the grades: ";
        for (int i=0; i<n; i++){
            cin >> a;
            grds.push_back(a);
        }
        grades=grds;
    }

    vector <int> Student::NewGrade(float newgg){ // создаем функцию которая возвращает массив с новой оценкой 
        grades.push_back(newgg);
        return grades;
    }

    float Student::MediumGrade(){ // эта функция должны была вернуть среднюю оценку ученика
        totalgrades=0;
        for (int i=0; i<grades.size(); i++){
            totalgrades+=grades[i];
        }
        totalgrades/grades.size();
        return totalgrades;
    }

    string Student::Class(){
        string room=grade;
        return room;
    }

    string Student::SchoolName(){
        string building=school;
        return building;
    }