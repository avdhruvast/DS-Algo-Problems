#include<bits/stdc++.h>
using namespace std;
int pow(int n,int m)
{
  if(m==0)
    return 1;
  int t=pow(n,m/2);
  if(m%2==0)
    return t*t;
  else
    return n*t*t;
}
int main()
{
  int n,m;
  cin>>n>>m;
  cout<<pow(n,m);
}
