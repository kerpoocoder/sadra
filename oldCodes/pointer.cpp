#include<iostream>
using namespace std;
void f(int *px)
{
  *px=111;
}
int main()
{
  int x;
  cout<<(&x)<<endl;
  f(&x);
  cout<<x<<endl;
  int a[100]={3,4,5,6};
  cout<<*(a+3)<<endl;
}
//[      ][      ][      ][      ]
