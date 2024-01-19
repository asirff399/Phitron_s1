#include<stdio.h>
void fun(int *p)
{
   //printf("value of main x - %p\n",p);
   *p=69;
}
int main()
{int x=10;
// printf("address of x - %p\n",&x);

 fun(&x);
 printf("value of x - %d\n",x);
  

    return 0;
}