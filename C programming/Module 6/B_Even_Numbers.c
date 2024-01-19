#include<stdio.h>
int main()
{
 int N;
 scanf("%d",&N);
    if(N==1)
    {
        printf("-1\n");
    }
    else
    {
        for(int i=1;i<=N;i=i+1)
        {
            if(i%2==0)
            {
                  printf("%d\n",i);
            }
          
        }
    }
 
 
  

    return 0;
}