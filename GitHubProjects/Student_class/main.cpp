#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "Student.h"
#include "Student.cpp"
#include "School_room.h"
#include "School_room.cpp"

using namespace std;

int main(){
    string student_name, student_school, student_class, classroom_grade;
    vector <int> all_marks;
    float mark_class;
    int n;
    int a;
    cout << "Welcome to a classroom!" << endl;
    cout << "Please enter their grade of the classroom (with letter format or number+letter without spacebar): ";
        cin >> classroom_grade;
        cout << "The marks of the classroom, first enter how many: ";
        cin >> n;
        cout << "And now, the marks that are those: ";
        for (int i=0; i<n; i++){
            cin >> a;
            all_marks.push_back(a);
        }
        cout << endl;
    School_room nine(classroom_grade, all_marks);
    nine.ClassMarks();
    mark_class=nine.Medium_mark();
    cout << "The medium mark of all the group is: " << mark_class << endl;
    cout << "Now, would you like to call a student?  Yes-1, No-0 ";
    cin >> a;
    if (a==1){
        cout << "Please enter their grade/class(with letter format): ";
        cin >> student_class;
        cout << "The school this student goes to: ";
        cin >> student_school;
        cout << "And their name: ";
        cin >> student_name;
        Student A(student_class, student_school, student_name);
    }
    else {
        cout << "Okey! They get the default configuration :)";
    }
    cout << "Thank you and goodbye!";
    Sleep(1000);

        return 0;
    }