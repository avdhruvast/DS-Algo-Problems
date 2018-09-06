#include<bits/stdc++.h>
using namespace std;
void FindMinMax(int *a,int n,int& min,int& max)
{
  max=INT_MIN;min=INT_MAX;
  if(n%2!=0)
  {
    n--;
  }
  for(int i=0;i<n;i+=2)
  {
    int min_,max_;
    if(a[i]>a[i+1])
    {
      min_=a[i+1];
      max_=a[i];
    }
    else
    {
      min_=a[i];
      max_=a[i+1];
    }
    if(max_>max)
    {
      max=max_;
    }
    if(min_<min)
    {
      min=min_;
    }
  }
  if(n%2!=0)
  {
    if(a[n]>max)
    {
      max=a[n];
    }
    if(a[n]<min)
    {
      min=a[n];
    }
  }
}
int main()
{
  int n,min,max;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  FindMinMax(a,n,min,max);
  cout<<min<<" "<<max;
}
