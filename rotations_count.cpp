#include<bits/stdc++.h>
using namespace std;
int FindRotationCount(int *a,int n)
{
  int l=0,h=n-1,m;
  while(l<=h)
  {
    if(a[l]<=a[h])return l;
    int m=(l+h)/2;
    int next=(m+1)%n;
    int prev=(m+n-1)%n;
    if(a[m]<=a[next]&&a[m]<=a[prev])return m;
    else if(a[m]<=a[h])h=m-1;
    else if(a[m]>=a[l])l=m+1;
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
  cout<<FindRotationCount(a,n)<<endl;
}
