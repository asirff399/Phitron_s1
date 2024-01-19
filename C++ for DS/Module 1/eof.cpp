#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    //while(scanf("%d %d",&a,&b) !=EOF)
    while(cin>>a>>b)
    {
        printf("%d %d\n",a,b);
    }
    return 0;
}