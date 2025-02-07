#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
  string name,family;
  int w,h;
  void show()
  {
    cout<<name<<" "<<family<<endl;
  }
};
bool cmp(student a,student b)
{
  if(a.h>b.h)
    return false;
  else if(a.h<b.h)
    return true;
  return a.w<b.w;
}
int main()
{
  vector<student>v;
  int n;cin>>n;
  for(int i=1;i<=n;i++)
    {
      student x;
      cin>>x.name>>x.family>>x.w>>x.h;
      v.push_back(x);
    }
  sort(v.begin(),v.end(),cmp);
  for(auto s:v)
    s.show();
}
