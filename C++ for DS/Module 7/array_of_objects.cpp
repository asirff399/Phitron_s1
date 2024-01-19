#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int mark;

};
int main()
{
    int n;
    cin >>n;
    //Student a[n];
    //int * a=new int[n];
    Student *a=new Student[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].mark;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<endl<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    
    return 0;
}