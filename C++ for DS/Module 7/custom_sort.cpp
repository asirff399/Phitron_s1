#include<bits/stdc++.h>
using namespace std;
class Freq
{
    public:
    char value;
    int count;
};
bool cmp(Freq a, Freq b)
{
    if(a.count==b.count)return a.value <b.value;
    else return a.count > b.count;
}
int main()
{
    string s;
    cin>>s;
    Freq frq[26];
    for(int i=0;i<26;i++)
    {
        frq[i].value=char(i+'a');
        frq[i].count=0;
    }
    for(char c:s)
    {
        int ascii=char(c-'a');
        frq[ascii].count++;

    }
    sort(frq,frq+26,cmp);
    for(int i=0;i<26;i++)
    {
       
        if(frq[i].count > 0)
        {
            
             for(int j=0;j<frq[i].count;j++)
             {
                 cout<<frq[i].value;
             }
        }
    }
    return 0;
}