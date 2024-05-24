#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
  class Student
  {
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r,int c,double g)
    {
        roll=r;
       cls=c;
        gpa=g;
    }
  };
int main(){
Student rahim(20,4,5.01);
cout<<rahim.roll << " "<<rahim.cls<<" "<<rahim.gpa;
 return 0;

}