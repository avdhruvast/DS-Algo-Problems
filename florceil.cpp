#include<bits/stdc++.h>
using namespace std;
int FloorBS(int *a,int n,int k)
{
  int l=0,h=n-1,floor_=-1;
  while(l<=h)
  {
    int m=(l+h)/2;
    if(a[m]==k)
      return a[m];
    else if(k<a[m])
      h=m-1;
    else
    {
      floor_=a[m];
      l=m+1;
    }
  }
  return floor_;
}
int CeilBS(int *a,int n,int k)
{
  int l=0,h=n-1,ceil_=-1;
  while(l<=h)
  {
    int m=(l+h)/2;
    if(a[m]==k)
      return a[m];
    else if(k<a[m])
    {
      h=m-1;
      ceil_=a[m];
    }
    else
      l=m+1;
  }
  return ceil_;
}
int main(int argc, char const *argv[])
{

  int n,k;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>k;
  cout<<FloorBS(a,n,k)<<" "<<CeilBS(a,n,k);
  return 0;
}
