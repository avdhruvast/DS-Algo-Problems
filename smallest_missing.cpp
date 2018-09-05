#include<bits/stdc++.h>
using namespace std;
int SmallestMissing(int *a,int l,int h)
{
  if(l>h)
    return l;
  int m=l+(h-l)/2;
  if(a[m]==m)
    return SmallestMissing(a,m+1,h);
  else
    return SmallestMissing(a,l,m-1);
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
  cout<<SmallestMissing(a,0,n-1)<<endl;
}
