#include<stdio.h>
int main()
{
 long long int n;
 scanf("%lld",&n);
 long long int sum=0;
 long long int ar[n];
 for(int i=0;i<n;i++)
 {
    scanf("%lld",&ar[i]);
 }
 for(int i=0;i<n;i++)
  {
    sum=sum+ar[i];
  }
  if(sum<0)
  {
     printf("%lld",sum=-sum);
  }
  else
  {
    printf("%lld",sum);
  }
  

    return 0;
}