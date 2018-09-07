#include<bits/stdc++.h>
using namespace std;
int FindFirstOccurrence(int *a,int n,int x)
{
  int l=0,h=n-1,m;
  int result=-1;
  while(l<=h)
  {
    int m=(l+h)/2;
    if(a[m]==x)
    {
      result=m;
      h=m-1;
    }
    else if(a[m]>x)
      h=m-1;
    else
      l=m+1;
  }
  return result;
}
int FindLastOccurrence(int *a,int n,int x)
{
  int l=0,h=n-1,m;
  int result=-1;
  while(l<=h)
  {
    int m=(l+h)/2;
    if(a[m]==x)
    {
      result=m;
      l=m+1;
    }
    else if(a[m]>x)
      h=m-1;
    else
      l=m+1;
  }
  return result;
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
  vector<pair<int,int> >v;
  for(int i=0;i<n;)
  {
    int x=a[i];
    int occ=FindLastOccurrence(a,n,x)-FindFirstOccurrence(a,n,x)+1;
    v.push_back(make_pair(x,occ));
    i=i+occ;
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
  return 0;
}
