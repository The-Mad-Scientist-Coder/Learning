#pragma once
#include "Student.h"
#include "School_room.h"

School_room::School_room(){
        grade="9A";
        marks={2, 4, 5, 5, 5, 3, 4, 2, 5, 4, 3, 2, 4, 5, 5};
        totalgrades=0;
    }

    School_room::School_room(string grd, vector <int> mrks){
        grade=grd;
        marks=mrks;
    }

    
    void School_room::ClassMarks(){
        cout << "The classes' marks are: ";
        for (int i=0; i<marks.size(); i++){
            cout << marks[i] << " ";
    }
    return;
    }


    float School_room::Medium_mark(){
        float mg=0;
        for (int i=0; i<marks.size(); i++){
            mg= mg+marks[i];
        }
        mg=mg/marks.size();
        return mg;
    }