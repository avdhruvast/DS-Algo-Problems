#include<bits/stdc++.h>
using namespace std;
int BS(int *a,int l,int h,int x)
{
  if(l>h)
    return -1;
  int m=(l+h)/2;
  if(x==a[m])
    return m;
  else if(x<a[m])
    return BS(a,l,m-1,x);
  else
    return BS(a,m+1,h,x);
}
int exponential_search(int *a,int n,int x)
{
  int b=1;
  while(b<n&&a[b]<x)
  {
    b=b*2;
  }
  return BS(a,b/2,min(b,n),x);
}
int main()
{
  int n,x;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>x;
  cout<<exponential_search(a,n,x)<<endl;
  return 0;
}
