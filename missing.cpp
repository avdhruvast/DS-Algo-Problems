#include<bits/stdc++.h>
using namespace std;
int Missing(int *a,int n)
{
  int l=0,h=n-1;
  int d=(a[n-1]-a[0])/n;
  while (l<=h)
  {
    int m=h-(h-l)/2;
    if(m+1<n &&a[m+1]-a[m]!=d)
    {
      return a[m+1]-d;
    }
    if(m-1 >=0 && a[m]-a[m-1]!=d)
    {
      return a[m-1]+d;
    }
    if(a[m]-a[0]!=(m-0)*d)
      h=m-1;
    else
      l=m+1;
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<Missing(a,n)<<endl;
}
