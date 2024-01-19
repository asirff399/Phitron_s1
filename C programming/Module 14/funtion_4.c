#include<stdio.h>

        // No Return + No Parameter

void sum(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    printf("%d\n",s);
}
int main()
{
 sum();
  

    return 0;
}