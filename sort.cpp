#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  sort(a+1,a+5);//nlog(n)
  for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
