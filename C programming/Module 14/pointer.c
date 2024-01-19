#include<stdio.h>
int main()
{
 int x=10;
  printf("%p \n",&x);
  int* p=&x;
  printf("%p \n",p);
  printf("%d \n",*p);
 
    //deference
  *p=500;

  printf("%d ",x);


    return 0;
}