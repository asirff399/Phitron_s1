#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=23;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age=33;
    void hello()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
//using namespace Sakib;
int main()
{
    cout<<age<<endl;
    cout<<Sakib::age<<endl;
    hello();
    Sakib::hello();
    
    return 0;
}