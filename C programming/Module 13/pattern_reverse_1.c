#include<stdio.h>
int main()
{
 int n,k=n;
 scanf("%d ",&n);
 for(int i=0;i<n;i++)
 {
    for(int j=n;j>i;j--)
    {
         printf("* ");        
    }
    k--;
     printf("\n");
 }
 

    return 0;
}