#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s)>>s;
    stringstream ss(s);
    string word;
    // while(ss>>word)
    // {
    //     cout<<word<<" ";
    // }
    int cnt=0;
    while(ss>>word)
    {
        cnt++;
    }cout<<cnt;




    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    //cout<<s<<endl;
    return 0;
}