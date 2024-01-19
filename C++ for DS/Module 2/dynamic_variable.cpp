#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a =new int;
    cout <<"fun : "<< a <<endl;
    *a = 100;
    return a;
}
int main()
{
    int *a =fun();
    cout<<"main : "<< *a <<endl;
    //int x=10;
    // int * a= new int;
    // *a = 10;
    // cout<< *a <<endl; 


    // float * f=new float;
    // *f=1.2423;
    // cout<<*f<<endl;
    // return 0;
}