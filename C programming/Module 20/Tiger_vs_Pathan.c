#include<stdio.h>
char p_vs_t(int n,char a[])
{  int cnt_T=0,cnt_P=0;

    for(int j=0;j<n;j++)
   {
      if(a[j]=='T')
      {
        cnt_T++;
      }
      else if(a[j]=='P')
      {
        cnt_P++;
      }
   }

      if(cnt_T<cnt_P)
   {
    return 'P';
   }
   else if(cnt_T>cnt_P)
   {
     return 'T';
   }
   else 
   {
      return 'D';
   }
}
int main()
{
 int t;
 scanf("%d",&t);
 for(int i=0;i<t;i++)
 {
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s ",a);

    char ans= p_vs_t(n,a);
    if(ans=='T')
    {
        printf("Tiger\n");
    }
    if(ans=='P')
    {
        printf("Pathaan\n");
    }
    if(ans=='D')
    {
        printf("Draw\n");
    }
 }
  

    return 0;
}
