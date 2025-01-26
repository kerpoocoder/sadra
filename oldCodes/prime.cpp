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
  long long n;
  cin>>n;
  cout<<is_prime(n)<<endl;
}
//d*n/d=n
//O(n)
//n^2 -> O(n^2)
// a|n (n/a)|n
// a*b = n
// a>sqrt(n) and b>sqrt(n) => a*b>n
// a<=sqrt(n) || b<=sqrt(n)
