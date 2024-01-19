#include<stdio.h>
int main()
{
 int A,B;
 scanf("%d %d",&A,&B);
 if(A%B==0)
 {
    printf("Multiples");
 }
 else if(B%A==0)
 {
    printf("Multiples");
 }
 else
 {
    printf("No Multiples");
 }
  

    return 0;
}