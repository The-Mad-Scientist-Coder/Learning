#include <iostream>
#include <vector>
#include <string>


using namespace std;

class School_room {

private:
string grade;
vector <float> marks;
float totalgrades;


public:


    class Main_student{

        private:
        string name;
        int mark;
        int respect;

        public: 
        Main_student(){
            name="Nastya";
            mark=5;
            respect=80;
        }
    };


    School_room(){
        grade="9A";
        marks={2, 4, 5, 5, 5, 3, 4, 2, 5, 4, 3, 2, 4, 5, 5};
        totalgrades=0;
    }

    
    vector <float> gs(){
        return marks;
    }


    float Medium_mark(){
        float mg=0;
        for (int i=0; i<marks.size(); i++){
            mg= mg+marks[i];
        }
        mg=mg/marks.size();
        return mg;
    }

};

int main(){
vector <float> all_marks;
float mark_class;
string grade;
School_room nine;

all_marks=nine.gs();
mark_class=nine.Medium_mark();
cout << "The classes' marks are: ";
for (int i=0; i<all_marks.size(); i++){
    cout << all_marks[i] << " ";
}
cout << endl;
cout << "The medium mark of all the group is: " << mark_class << endl;
    return 0;
}