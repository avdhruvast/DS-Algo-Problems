#include<bits/stdc++.h>
using namespace std;
int BS(int *a,int n,int k)
{
  int l=0,h=n-1,m;
  while(l<=h)
  {
    m=(l+h)/2;
    if(a[m]==k)
      return m;
    else if(m-1>=l && a[m-1]==k)
      return m-1;
    else if(m+1<=h && a[m+1]==k)
      return m+1;
    else if(k<a[m])
      h=m-2;
    else
      l=m+2;
  }
  return -1;
}
int main()
{
  int n,k;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>k;
  cout<<BS(a,n,k)<<endl;
}
