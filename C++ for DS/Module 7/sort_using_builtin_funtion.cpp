#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int mark;

};
bool cmp(Student a,Student b)
{
    if(a.mark==b.mark)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.mark < b.mark;
    }
    // // if(a.mark >= b.mark) 
    // //     return true;
    // // else
    // //     return false;
    // // return a.mark <= b.mark ;
    // if(a.mark < b.mark)
    // {
    //     return true ;
    // }
    // else if(a.mark > b.mark)
    // {
    //     return false ;
    // }
    // else
    // {

    //     // if(a.roll < b.roll)
    //     // {
    //     //     return true ;
    //     // }
    //     // else
    //     // {
    //     //     return false ;
    //     // }
    //     return a.roll < a.roll ;
    // }
}
int main()
{
    int n;
    cin >>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {   
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    
    return 0;
}