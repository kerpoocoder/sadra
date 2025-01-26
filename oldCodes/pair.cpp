#include<iostream>
#include<algorithm>
using namespace std;
pair<int,int>a[300010];
int n,t;
bool cmp(pair<int,int> a,pair<int,int> b)
{
  //a...b true
  //b...a false
  if(a.first!=b.first)
    return a.first>b.first;
  return a.second<b.second;
}
int main()
{
  /*pair<int,char>p;
    p.first=10;
    p.second='a';
    p.first++;
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair(9,'c');
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,double>q;*/

  cin>>n;
  for(int i=1;i<=n;i++)
    {
      int x;
      cin>>x;
      a[i]=make_pair(x,i);
    }
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++)
    cout<<a[i].second<<" ";
}
