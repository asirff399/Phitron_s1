#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    if(0<n)
    {
        printf("%d ",i);
    }
 }
for(int i=n;i<=0;i++)
    {
        if(0>n)
        {
            printf("%d ",i);
        }
    }
    return 0;
}