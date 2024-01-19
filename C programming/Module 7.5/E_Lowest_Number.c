#include<stdio.h>
int main()
{
 
 int n;
 scanf("%d",&n);
 int A[n];
 int pos=0;
 int min=__INT_MAX__;
 for(int i=0;i<n;i++)
 {
    scanf("%d",&A[i]);   
 } 
 for(int i=0;i<n;i++)
 {
    if(A[i]<min)
    {
        min=A[i];
        pos=i+1;
    }
 }
 printf("%d %d\n",min,pos);
 

    return 0;
}
  

