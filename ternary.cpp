#include<bits/stdc++.h>
using namespace std;
int ternary_search(int *a,int n,int x)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int l_m=l+(h-l)/3;
    int h_m=h-(h-l)/3;
    if(a[l_m]==x)
    {
      return l_m;
    }
    else if(a[h_m]==x)
    {
      return h_m;
    }
    else if(a[l_m]>x)
    {
        h=l_m-1;
    }
    else if(a[h_m]<x)
    {
      l=l_m+1;
      h=h_m-1;
    }
  }
  return -1;
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
  cout<<ternary_search(a,n,x)<<endl;
  return 0;
}
