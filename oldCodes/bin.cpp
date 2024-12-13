#include<iostream>
using namespace std;
char hexdigit[]={'A','B','C','D','E','F'};
int a[100],i=0;
void show_bin(int x)
{
  for(int i=0;i<100;i++)
    cout<<a[i]<<endl;
  while(x>0)
    {
      a[i]=x%16;
      x/=16;
      i++;
    }
  for(int j=i-1;j>=0;j--)
    if(a[j]<10)
      cout<<a[j];
    else
      {
	char c;
	cout<<(a[j]-10+'A');
      }
}
int32_t main()
{
  int x;
  cin>>x;
  show_bin(x);
}

/*
  (3242)_3 = 2*3^0 + 4*3^1 + 2*3^2 + 3*3^3

  113= 1*32+1*16+1*8+0*4+0*2+0*1=(111000)_2
 */
