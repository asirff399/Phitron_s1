#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int i,A[n];
for( i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
int ans=-1;
int X;
scanf("%d",&X);
for( i=0;i<n;i++)
{ 
    if(A[i] == X)
{
   ans=i;
    break;
}
}
 printf("%d",ans);
    return 0;
}