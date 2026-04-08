#pragma once
#include "Student.h"


class School_room {

private:
    string grade;
    vector <int> marks;
    float totalgrades;
    vector <Student> Class;


public:
    School_room();

    School_room(string grd, vector <int> mrks);

    
    void ClassMarks();


    float Medium_mark();
};