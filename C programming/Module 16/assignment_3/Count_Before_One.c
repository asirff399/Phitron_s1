#include<stdio.h>
int count_before_one(int ar[],int n)
{ 
  int cnt=0;
  for(int i=0;i<n;i++)
  {
   if(ar[i]==1)
   {
    break;
   }cnt++;
  }
  return cnt;
}
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d ",&ar[i]);
  }
  int ans= count_before_one(ar,n);
  
 printf("%d ",ans);   
    return 0;
}