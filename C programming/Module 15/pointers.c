#include<stdio.h>
int main()
{
 int x=100; 
 int *ptr=&x; 
   //x == *ptr same

 // x=200;
 *ptr=150;

//  printf("x er address - %p\n",&x);
//  printf("ptr er value - %p\n",ptr);
//  printf("*ptr er address - %p\n",&ptr);
//  printf("size of ptr - %d\n",sizeof(ptr));
  
    printf("x er value - %d\n",x);
    printf("x er value - %d\n",*ptr);
    return 0;
}