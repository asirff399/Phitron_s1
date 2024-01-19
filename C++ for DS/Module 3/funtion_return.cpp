#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls, double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
Student* fun()
{
   Student *rakib=new Student(46,8,3.96);
   return rakib;
}
int main()
{
    Student* ans=fun();
    cout<< ans->roll<<" "
        << ans->cls<<" "
        << ans->gpa<<endl;
    delete ans;
    cout<< ans->roll<<" "
        << ans->cls<<" "
        << ans->gpa<<endl;
    
    return 0;
}