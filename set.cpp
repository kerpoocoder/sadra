#include<iostream>
#include<set>
using namespace std;
int main()
{
  set<int>s={8,88,2,11,11};
  s.insert(5);
  s.insert(5);
  cout<<s.size()<<endl;
  s.erase(7);
  cout<<s.size()<<endl;
  for(auto a:s)
    cout<<a<<" ";
  cout<<endl;
  cout<<*s.begin()<<" "<<*s.rbegin()<<endl;
  if(s.find(88)!=s.end())
    cout<<"Found"<<endl;
  else
    cout<<"Not found"<<endl;
  s.clear();
}
