#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
  scanf("%s",&s);
 int cnt[26]={0};
 for(int i=0;i<strlen(s);i++)
 {
    int valu = s[i]-'a';
    cnt[valu]++;
 }
//  for(int i=0;i<26;i++)
//  {
//    if(cnt[i]!=0)
//    {
//      printf("%c - %d\n",i+'a',cnt[i]);
//    }
//  }
  
  for(int i=0;i<strlen(s);i++)
  {
    int valu = s[i]-'a';
    if(cnt[valu]!=0)
    {
     printf("%c - %d\n",valu+'a',cnt[valu]);
    }
        cnt[valu]=0;
  }
    return 0;
}