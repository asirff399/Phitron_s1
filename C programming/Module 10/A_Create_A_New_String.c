#include<stdio.h>
#include<string.h>
int main()
{ char s[1001],t[1001];
  scanf("%s %s",&s,&t);
  int szs=strlen(s);
  int szt=strlen(t);

  int count=0,cnt=0;
 
 for(int i=0;i<szs;i++)
 {
   count++;
 }
 for(int i=0;i<szt;i++)
 {
   cnt++;
 }
 printf("%d %d\n",count,cnt);
  printf("%s %s",&s,&t);
 
  

    return 0;
}