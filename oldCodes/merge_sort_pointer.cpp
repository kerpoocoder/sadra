#include<iostream>
#include<vector>
using namespace std;
void merge_sort(int *l,int *r)
{
  if(l==r)
    return;
  int *mid=l+(r-l)/2;
  //divide
  merge_sort(l,mid);//left side
  merge_sort(mid+1,r);//right side
  //merge(conquer)
  int *p=l,*q=mid+1;
  vector<int>b;
  for(int *i=l;i<=r;i++)
    {
      if(p>mid)
	{
	  b.push_back(*q);
	  q++;
	}
      else if(q>r)
	{
	  b.push_back(*p);
	  p++;
	}
      else if(*p<*q)
	{
	  b.push_back(*p);
	  p++;
	}
      else
	{
	  b.push_back(*q);
	  q++;
	}
    }
  for(int i=0;i<b.size();i++,l++)
    *l=b[i];
}
int main()
{
  int a[100],n;
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  merge_sort(a+1,a+n);
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
