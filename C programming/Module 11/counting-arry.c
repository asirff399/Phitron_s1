#include<stdio.h>
#include<string.h>
int main()
{ int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 int cnt[7]={0};
 for(int i=0;i<n;i++)
 {
    // if(a[i]==0)
    // {
    //     zero++;
    // }
    // if(a[i]==1)
    // {
    //     one++;
    // }
    // if(a[i]==2)
    // {
    //     two++;
    // }
    
    //  if(a[i]==0)
    //  {
    //      cnt[0]++;
    //  }
    //  if(a[i]==1)
    //  {
    //      cnt[1]++;
    //  }
    //  if(a[i]==2)
    //  {
    //      cnt[2]++;
    //  }
  
  
     cnt[a[i]]++;
     
 }
//  printf(" 0 - %d\n 1 - %d\n 2 - %d\n 3 - %d\n 4 - %d\n 5 - %d\n 6 - %d\n",cnt[0],cnt[1],cnt[2],cnt[3],cnt[4],cnt[5],cnt[6]);
  for(int i=0;i<=6;i++)
  {
    printf("%d - %d\n",i,cnt[i]);
  }
    return 0;
}