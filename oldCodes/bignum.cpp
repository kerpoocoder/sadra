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
bignum prd(bignum a,int x)
{
  int carry=0;
  a.resize(a.size()+10);
  for(int i=0;i<a.size();i++)
    {
      a[i]*=x;
      a[i]+=carry;
      carry=a[i]/10;
      a[i]%=10;
    }
  while(a.back()==0)
    a.pop_back();
  return a;
}
bignum pw(int a,int b)
{
  bignum c={1};
  for(int i=1;i<=b;i++)
    c=prd(c,a);
  return c;
}
bignum str_to_bignum(string s)
{
  bignum ret;
  for(int i=s.size()-1;i>=0;i--)
    ret.push_back(s[i]-'0');
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
  string s,t;
  cin>>s>>t;
  show(sum(str_to_bignum(s),str_to_bignum(t)));
  //vector<bignum>fib={{1},{1}};
  //for(int i=3;i<=1000;i++)
  //  fib.push_back(sum(fib[fib.size()-1],fib[fib.size()-2]));
  //for(auto b:fib)
  //show(b);
  
}
/*
   11
  9846
     3
  ----
    38

    (9000+800+40+6)*3242
    20000+9000+500+30+8
    'a'-'A'
 */
