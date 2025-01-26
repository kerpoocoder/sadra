#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[]={1,2,3,4,5,6};
  //cout<<*a<<endl;
  //a[3]=9;
  //*(a+3)=9;
  //cout<<a[3]<<endl;
  do{
    for(int i=0;i<4;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }while(next_permutation(a,a+4));
  //for(int i=0;i<4;i++)
  //  cout<<a[i]<<" ";
  //cout<<endl;
}
