#include<iostream>
using namespace std;

int n,p[100],mark[100];

void perm(int i)
{
  if(i==n+1)
    {
      for(int i=1;i<=n;i++)
	cout<<p[i]<<" ";
      cout<<endl;
      return;
    }
  for(int j=1;j<=n;j++)
    if(mark[j]==0)
      {
	p[i]=j;
	mark[j]=1;
	perm(i+1);
	mark[j]=0;
      }
}
int main()
{
  cin>>n;
  perm(1);
}
/*
  t(n): time of making all permutations with n object

  t(n)=n*(n-1)*(n-2)*t(n-3)
  t(n)=n!
  t(n-1)=(n-1)*t(n-2)+n
 */
