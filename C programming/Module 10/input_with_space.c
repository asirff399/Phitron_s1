#include<stdio.h>
#include<string.h>
int main()
{
  char ar[50];
  //gets(ar);
  fgets(ar,50,stdin);
  ar[20]='\0';
  printf("%s",ar);
  

    return 0;
}