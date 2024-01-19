#include<stdio.h>
long long int multiplication(int m,int a,int b,int c)
{
   long long int mult = a*b*c;
   long long int mNumber=m/mult;
   return mNumber;     
}
int main()
{
 
 int t;
 scanf("%d",&t);
 for(int i=0;i<t;i++)
 {
    long long int m;
    scanf("%lld",&m);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    long long int ans = multiplication(m,a,b,c);
    
    if(m==0)
    {
     printf("0\n"); 
    }
    else if(m %(a*b*c)!=0)
    {
     printf("-1\n");
    }
    else{
          printf("%lld\n",ans);
    }
 
 }   
    return 0;
}

