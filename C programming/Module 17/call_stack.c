#include<stdio.h>
void world()
{
    printf("World\tStart\n");
    printf("World\tEnd\n"); 
}
void hellow()
{
    printf("Hellow\tStart\n");
    world();
    printf("Hellow\tEnd\n"); 
}
int main()
{
    printf("Main\tStart\n"); 
    hellow();
    printf("Main\tEnd\n");  
    return 0;
}