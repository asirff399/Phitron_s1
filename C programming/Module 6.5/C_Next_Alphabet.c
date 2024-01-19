#include<stdio.h>
int main()
{
  char n;
  char ans;
  scanf("%c",&n);
  for(int i='a';i<'z';i++)
  {
  if(n=='z')
  {
     printf("a");
     break;
  }
  else
  {
    printf("%c\n",n+1);
    break;
  }
    
  }
  

    return 0;
}