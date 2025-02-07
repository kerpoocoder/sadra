#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s="sadra",t="amir";//vector<char>
  cout<<s.length()<<endl;
  string x=s+","+t;
  cout<<x<<endl;
  x[5]='-';
  x[2]='?';
  for(int i=0;i<x.size();i++)
    cout<<x[i]<<endl;
  cout<<x.substr(3,6)<<endl;
  getline(cin,s);
  cout<<s<<endl;
}
