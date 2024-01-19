#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    char name[100];
    char section;
    int tmark;
    
};
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
        Student a,b,c;
        cin>>a.id>> a.name>>a.section>>a.tmark;
        cin>>b.id>> b.name>>b.section>>b.tmark;
        cin>>c.id>> c.name>>c.section>>c.tmark;  
        int mx=max({a.tmark,b.tmark,c.tmark});

          if(mx==a.tmark)
  {
   cout<<a.id<<" "<< a.name<<" "<<a.section<<" "<<a.tmark<<endl;
  }
  else if(mx==b.tmark)
  {
   cout<<b.id<<" "<< b.name<<" "<<b.section<<" "<<b.tmark<<endl;
  }
  else if(mx==c.tmark)
  {
   cout<<c.id<<" "<< c.name<<" "<<c.section<<" "<<c.tmark<<endl;
  }
  }

    return 0;
}