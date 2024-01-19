#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char s[100];
    int n;
    cin>>n;
    getchar();
    //cin>>s;
    //fgets(s,100,stdin);
    cin.getline(s,100);
    cout<<n<<endl;
    cout<<s<<endl;
    //cout<<strlen(s)<<endl;
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    return 0;
}