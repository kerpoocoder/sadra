#include<iostream>
using namespace std;
int digsum(int n)
{
  if(n==0)
    return 0;
  return digsum(n/10)+n%10;
}
int digcount(int n)
{
  if(n==0)
    return 0;
  return digcount(n/10)+1;
}
int sum1ton(int n)
{
  if(n==1)
    return 1;
  return sum1ton(n-1)+n;
}
int main()
{
  int n;
  cin>>n;
  cout<<digsum(n)<<endl;
  cout<<digcount(n)<<endl;
  cout<<sum1ton(n)<<endl;
}
