#include<stdio.h>
int main()
{
 double x=5.76;
 double *ptr=&x;
 double *ptr2=ptr;
 //x=2.43;
 //*ptr=6.69;
 *ptr2=0.69;
 printf("x er value - %0.2lf\n",x);
 printf("ptr er value - %0.2lf\n",*ptr);
 printf("ptr2 er value - %0.2lf\n",*ptr2);
  

    return 0;
}