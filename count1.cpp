#include<bits/stdc++.h>
using namespace std;
int Count1(int *a,int n)
{
  if(a[n-1]==0)
    return 0;
  if(a[0])
    return n;
  return Count1(a,n/2)+Count1(a+n/2,n-n/2);
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
  cout<<Count1(a,n)<<endl;
}
