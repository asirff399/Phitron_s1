#include<stdio.h>
void fun(int x)
{
    x=200;
     printf("fun er x er value - %d\n",x);
}
int main()
{
 int x=10;
 //printf("main er x er value - %d\n",x);
 fun(x);
 printf("main er x er value - %d",x);
  

    return 0;
}