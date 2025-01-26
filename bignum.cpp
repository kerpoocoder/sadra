#include<iostream>
#include<vector>
using namespace std;
#define bignum vector<int>

bignum sum(bignum a,bignum b)
{
  int carry=0,sz=max(a.size(),b.size())+5;
  bignum ret(sz);//a+b
  a.resize(sz);
  b.resize(sz);
  for(int i=0;i<sz;i++)
    {
      ret[i]=a[i]+b[i]+carry;
      carry=ret[i]/10;
      ret[i]%=10;
    }
  while(ret.back()==0)
    ret.pop_back();
  return ret;
}
void show(bignum v)
{
  for(int i=v.size()-1;i>=0;i--)
    cout<<v[i];
  cout<<endl;
}
int main()
{
  show(sum({6,4,8,9},{1,1,4,7,9}));
}
