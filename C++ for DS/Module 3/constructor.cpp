#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int roll,int cls,double gpa)
  {
    this->roll=roll;
    (*this).cls=cls;
    (*this).gpa=gpa;
    // roll=r;
    // cls=c;
    // gpa=g;
  }
};
int main()
{
    Student rahim(19,12,4.44);
    Student karim(11,10,4.73);
    // rahim.roll=19;
    // rahim.cls=12;
    // rahim.gpa=4.44;

    // Student karim;
    // karim.roll=19;
    // karim.cls=12;
    // karim.gpa=4.44;
    cout<< rahim.roll << " " 
        << rahim.cls  << " " 
        << rahim.gpa << endl;

    cout<< karim.roll << " " 
        << karim.cls  << " " 
        << karim.gpa << endl;
    return 0;
}