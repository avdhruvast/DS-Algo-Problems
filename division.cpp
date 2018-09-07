#include<bits/stdc++.h>
using namespace std;
double abs_(double i)
{
  return i>=0 ? i : -i;
}
double divide(double x,double y)
{
  if(y==0)
  {
    return ULONG_MAX;
  }
  double l=0,h=ULONG_MAX;
  double precision=0.001;
  int sign=1;
  if(x*y<0)
  {
    sign=-1;
  }
  x=abs_(x);
  y=abs_(y);
  while(1)
  {
    double m=l+((h-l)/2);
    if(abs_(y*m-x) <= precision)
      return m*sign;
    if(y*m<x)
      l=m;
    else
      h=m;
  }
}
int main()
{
  int x,y;
  cin>>x>>y;
  cout<<divide(x,y);
}
