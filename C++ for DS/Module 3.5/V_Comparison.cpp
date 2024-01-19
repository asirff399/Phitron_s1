#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s,b;
    cin>> a >> s >> b ;
    if(s== '>')
    {
        (a > b)? cout<< "Right" <<endl :
                   cout<< "Wrong" <<endl ;
    }
    else if(s=='<')
    {
          (a < b)? cout<< "Right" <<endl :
                  cout<< "Wrong" <<endl ;
    }
    else if(s=='=')
    {
        (a == b)? cout<< "Right" <<endl :
                   cout<< "Wrong" <<endl ;
    }
    return 0;
}