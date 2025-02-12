#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //vector<int> v(10,1);
  vector<int>v={0,1,2,3,4,5};
  cout<<v.size()<<endl;
  v.push_back(13);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  v.pop_back();
  v.clear();
  cout<<v.size()<<endl;
}
