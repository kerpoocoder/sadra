#include<iostream>
using namespace std;
bool is_prime(long long n)
{
  for(long long i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;
}
int main()
{
  cin>>n;
  cout<<is_prime(n)<<endl;
}
//d*n/d=n
