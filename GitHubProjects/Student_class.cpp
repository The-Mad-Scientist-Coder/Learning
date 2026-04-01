#include <iostream>
#include <vector>
#include <string>
#include <windows.h>


using namespace std;

class Student{

private:
    string name;
    string grade;
    string school;
    vector <int> grades;
    float totalgrades;


public:
Student(){
    grade="9A";
    school="MSK 55";
    grades={5, 5, 4, 3, 5, 4};
}

Student(string grade_, string school_, string name_){
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

vector <int> NewGrade(float newgg){ // создаем функцию которая возвращает массив с новой оценкой 
    grades.push_back(newgg);
    return grades;
}

float MediumGrade(){ // эта функция должны была вернуть среднюю оценку ученика
    totalgrades=0;
    for (int i=0; i<grades.size(); i++){
        totalgrades+=grades[i];
    }
    totalgrades/grades.size();
    return totalgrades;
}

string Class(){
    string room=grade;
    return room;
}

string SchoolName(){
    string building=school;
    return building;
}
};


class School_room {

private:
    string grade;
    vector <int> marks;
    float totalgrades;
    vector <Student> Class;


public:
    School_room(){
        grade="9A";
        marks={2, 4, 5, 5, 5, 3, 4, 2, 5, 4, 3, 2, 4, 5, 5};
        totalgrades=0;
    }

    School_room(string grd, vector <int> mrks){
        grade=grd;
        marks=mrks;
    }

    
    void ClassMarks(){
        cout << "The classes' marks are: ";
        for (int i=0; i<marks.size(); i++){
            cout << marks[i] << " ";
    }
    return;
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