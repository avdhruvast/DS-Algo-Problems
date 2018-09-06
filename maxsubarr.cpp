#include<bits/stdc++.h>
using namespace std;
int Maximum_Sum_Subarray(int *a,int l,int h)
{
  if(h==l)
    return a[l];
  int m=(l+h)/2;
  int left_max=INT_MIN;
  int sum=0;
  for(int i=m;i>=l;i--)
  {
    sum+=a[i];
    if(left_max<sum)
    {
      left_max=sum;
    }
  }


  int right_max=INT_MIN;
  sum=0;
  for(int i=m+1;i<=h;i++)
  {
    sum+=a[i];
    if(right_max<sum)
    {
      right_max=sum;
    }
  }

  int max_left_right=max(Maximum_Sum_Subarray(a,l,m),Maximum_Sum_Subarray(a,m+1,h));
  return max(max_left_right,left_max+right_max);
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
  cout<<Maximum_Sum_Subarray(a,0,n-1);
  return 0;
}
