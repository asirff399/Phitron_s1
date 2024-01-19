#include<stdio.h>
int main()
{
    char A;
    scanf("%c",&A);
        if(A>='a' && A<='z')
        {
            int ans;
            ans=A-32;
            printf("%c\n",ans);
        }
        else 
        {
            int ans;
            ans=A+32;
            printf("%c\n",ans);
        }

    return 0;
}