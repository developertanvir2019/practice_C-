#include <iostream>
#include <string>
using namespace std;



class Student{
    public:
    int id;
    string name;
    char section;
    int totalMarks;
    Student(int i,string n, char sec,int total){
        id=i;
        name=n;
        section=sec;
        totalMarks=total;
    }
};

int main() {
    int T;
    cin >> T;

   for(int i=0;i<T;i++) {
        Student* students[3];
        for (int i = 0; i < 3; i++) {
            int id, totalMarks;
            string name;
            char section;
            cin >> id >> name >> section >> totalMarks;
            students[i] = new Student(id, name, section, totalMarks);
        }

        Student* topStudent = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i]->totalMarks > topStudent->totalMarks ||
                (students[i]->totalMarks == topStudent->totalMarks && students[i]->id < topStudent->id)) {
                topStudent = students[i];
            }
        }
        cout << topStudent->id << " " << topStudent->name << " " << topStudent->section << " " << topStudent->totalMarks << endl;

        for (int i = 0; i < 3; i++) {
            delete students[i];
        }
    }

    return 0;
}
