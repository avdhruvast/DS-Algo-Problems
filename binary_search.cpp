#include<bits/stdc++.h>
using namespace std;
int bs(int *a,int k,int l,int h)
{

  while(l<=h)
  {
    int m=(l+h)/2;
    if(a[m]==k)
      return m+1;
    else if(a[m]>k)
      h=m-1;
    else
      l=m+1;
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
  cout<<bs(a,k,0,n)<<endl;
}
