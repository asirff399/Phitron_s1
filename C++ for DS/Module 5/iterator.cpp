#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    //string:: iterator it;
    cin>>s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i];
    // }
    for(auto it=s.begin();it<s.end();it++)
    {
         cout<<*it; 
    }
   
    //cout<<*s.begin()<<endl;
    //cout<<*(s.end()-1)<<endl;
    return 0;
}