#include<bits/stdc++.h>
using namespace std;
int interpolation(int *a,int n,int x)
{
  int l=0,h=n-1;
  while(x>=a[l]&&x<=a[h]&&l<=h)
  {
    int pos=l+(((double)(h-l)/(a[h]-a[l]))*(x-a[l]));
    if(a[pos]==x)
      return pos;
    else if(a[pos]>x)
      h=pos-1;
    else
      l=pos+1;
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
  cout<<interpolation(a,n,x);
}
