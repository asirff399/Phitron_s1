#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("berger khabo");
    }
    else if(tk >= 50)
    {
        printf("fuska khabo");
    }
    else if(tk >=20)
    {
        printf("cha khabo");
    }
    else
    {
        printf("kopala kichui nai");
    }
    return 0 ;
}