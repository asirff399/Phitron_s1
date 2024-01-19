#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=1;i<=((n-1)/2)+6;i++)
 {
  for(int j=1;j<=((n-1)/2)+6 -i;j++)
  {
   printf(" ");
  }
  for(int k=1;k <=2*i-1;k++)
  {
   printf("*");
  }
  printf("\n");
 }

 for(int i=1;i<=5;i++)
 {
   for(int j=1;j<=5;j++)
   {
      printf(" ");
   }
   for(int j=1;j<=n;j++)
   {
      printf("*");
   }
   printf("\n");
 }
    return 0;
}

  