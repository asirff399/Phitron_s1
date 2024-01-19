#include<iostream>
#include<stdio.h>
int main()
{
   // std::cout<<"hello world";
    int a=10;
    long long int as=17785654876;
    float f=1.243;
    double lf=23.97467892346;
    char c='A';

    //printf("%d ",a);
    //std::cout<< a;

    // printf("my favourite number is %d\n",a);
    // std::cout<<"my favourite number is "<<a<<"\n";
    // std::cout<<"my "<<a<<" favourite number is ";

    printf("%d %lld\n",a,as);
    std::cout<<a<<" "<<as<<"\n";

    //endl
    std::cout<<a<< std::endl
             <<as<<"\n";

    return 0;
}