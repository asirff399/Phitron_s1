#include<stdio.h>
int main()
{
 int ar[5]={10,20,30,40,50};

//  printf("address of index 0 - %p\n",&ar[0]);
//  printf("address of index 0 - %p\n",ar);

//  printf("value of index 0 - %d\n",ar[0]);
//  printf("value of index 0 - %d\n",*ar);

//  printf("value of index 1 - %d\n",ar[1]);
//  printf("value of index 1 - %d\n",*(ar+1));
  
  printf("%d\n",*(1+ar));
  printf("%d\n",*(ar+1));
  printf("%d\n",ar[1]);
  printf("%d\n",1[ar]);

    return 0;
}