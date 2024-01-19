#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        string s;
        cin>>s;
        string x;
        cin>>x;
        int f=s.find(x);
        while(f != -1)
        {
            s.replace(f,x.length(),"#");
            f=s.find(x,f+1);
        }cout<<s<<endl; 
    }    
    return 0;
}