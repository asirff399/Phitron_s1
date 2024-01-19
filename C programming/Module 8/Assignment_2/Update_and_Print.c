#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ar[n+1];
 for(int i=0;i<n;i++)
 {
    scanf("%d ",&ar[i]);
 }
 int x,v;
 scanf("%d %d",&x,&v);
 ar[x]=v;
 int tmp;
 int i=0,j=n-1;
 while(i<j)
 {
    tmp=ar[i];
    ar[i]=ar[j];
    ar[j]=tmp;
    i++;
    j--;
 }
 for(int i=0;i<n;i++)
 {
    printf("%d ",ar[i]);
 }

    return 0;
}