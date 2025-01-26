#include<iostream>
using namespace std;
int a[100],b[100],c[100],carry,n,m;
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<m;i++)
    cin>>b[i];
  for(int i=0;i<10;i++)
    {
      c[i]=a[i]+b[i]+carry;
      carry=c[i]/10;
      c[i]%=10;
      cout<<c[i];
    }
  
}
/*
  011
  2456
   348
------
  2804
*/
