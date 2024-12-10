#include<iostream>
using namespace std;
int a[1000],carry,n,k;
int main()
{
  cin>>n>>k;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int j=0;j<1000;j++)
    {
      for(int i=0;i<1000;i++)
	{
	  a[i]=a[i]*k+carry;
	  carry=a[i]/10;
	  a[i]%=10;
	}
    }
  for(int i=0;i<1000;i++)
    cout<<a[i];
  
}
/* 34
  2456
     7
------
     2
*/
