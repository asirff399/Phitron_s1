#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    
   while(cin.getline(s,100005))
    {int n=strlen(s);
       sort(s,s+n);
       for(int i=0;i<n;i++)
       {
          if(s[i]!=' ')
        {
            cout<<s[i];
        }
       }
       cout<<endl;
    }
    return 0;
}
