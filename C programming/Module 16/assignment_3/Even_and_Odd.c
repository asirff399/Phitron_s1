#include<stdio.h>
 void odd_even(void)
 {
    int n;
     scanf("%d",&n);
    int a[n];
    int odd_cnt=0,even_cnt=0; 
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]%2==1)
        {
            odd_cnt++;
        }
        if(a[i]%2==0)
        {
            even_cnt++;
        }
    }printf("%d %d",even_cnt,odd_cnt);
 }
int main()
{
  odd_even();
    return 0;
}