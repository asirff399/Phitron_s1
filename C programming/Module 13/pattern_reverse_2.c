#include<stdio.h>
int main()
{
 int n,s,k;
 scanf("%d",&n);
 s=0;
 k=n*2-1;
 for(int i=1;i<=n;i++)
 {
    for(int j=s;j>=1;j--)
    {
       printf("  ");
    }
    for(int j=k;j>=1;j--)
    {
       printf("* ");     
    }
    // line sas
     k=k-2;
    s++;
    printf("\n");
 }
    return 0;
}