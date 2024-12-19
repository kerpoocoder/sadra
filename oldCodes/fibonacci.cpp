#include<iostream>
using namespace std;
int f(int n)
{
  if(n==1 || n==2)
    return 1;
  return f(n-1)+f(n-2);
}
int main()
{
  int n;
  cin>>n;
  cout<<f(n)<<endl;
}
/*
f(1)=1
f(2)=1
f(n)=f(n-1)+f(n-2) n>2

T(N)=time of running f(N)

T(1)=1
T(2)=1
T(3)=2
T(4)=3
T(5)=5
...
T(n)=f(n)
 */
