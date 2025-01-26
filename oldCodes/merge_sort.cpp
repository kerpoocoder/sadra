#include<iostream>
using namespace std;
int a[100],b[100],n;
void merge_sort(int l,int r)
{
  if(l==r)
    return;
  int mid=(l+r)/2;
  //divide
  merge_sort(l,mid);//left side
  merge_sort(mid+1,r);//right side
  //merge(conquer)
  int p=l,q=mid+1;
  for(int i=l;i<=r;i++)
    {
      if(p>mid)
	b[i]=a[q++];//b[i]=a[q];q++;
      else if(q>r)
	b[i]=a[p++];
      else if(a[p]<a[q])
	b[i]=a[p++];
      else
	b[i]=a[q++];
    }
  for(int i=l;i<=r;i++)
    a[i]=b[i];
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  merge_sort(1,n);
  for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
/*
  [1 , 2 , 2 , 3 , 3 , 5 , 7 , 9]->8
  [3 , 5 , 7 , 9] [1 , 2 , 2 , 3]->8
  [3 , 5] [7 , 9] [1 , 2] [2 , 3]->8
  [3] [5] [7] [9] [1] [2] [2] [3]->8

  8*4

  n
  n*log(n)
 */
