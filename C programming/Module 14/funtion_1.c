#include<stdio.h>

   //Return + Parameter


int sum(int x,int y)
{
   int sum=x+y;
   return sum;
}
int main()
{
 //int s=sum(25,75);
 printf("%d\n",sum(35,76));
 printf("%d\n",sum(4,1));
 printf("%d\n",sum(4387647,476484));
    return 0;
}