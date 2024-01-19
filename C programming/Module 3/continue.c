#include<stdio.h>
int main()
{    
    int i;
    for(i=1;i<=10;i=i+1)
    {

        
        if(i==6)
        {
            continue;
        }
           
        if(i==2)
        {
            continue;
        }
           
        if(i==9)
        {
            continue;
        }
         printf("%d\n",i);
    }
    
    return 0 ;
}