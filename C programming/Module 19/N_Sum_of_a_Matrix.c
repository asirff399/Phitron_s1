#include<stdio.h>
// void fun(int *a,int n,int m)
// {

// }
int main()
{
  int n,m;
 scanf("%d %d",&n,&m);
 int a[n][m];
 int a2[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        scanf("%d ",&a2[i][j]);
        }
    }

  //fun(a,n,m);

    return 0;
}