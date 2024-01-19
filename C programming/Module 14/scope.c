#include<stdio.h>
        // global
    int s=101;
void fun(void)
{
 //   printf("address of fun er s - %p\n",&s);
}
int main()
{
//  printf("address of main er s - %p\n",&s);
  fun();

  int y=202;
  for(int i=1;i<=6;i++)
  {
    printf("%d\n",y);
  }

    return 0;
}