#include<bits/stdc++.h>
using namespace std;
int findpeakelement(int *a,int l,int h,int n)
{
  int m=(l+h)/2;
  if((m==0 || a[m-1]<=a[m])&&(m==n-1||a[m+1]<=a[m]))
    return m;
  if(m-1>=0 && a[m-1]>a[m])
    return findpeakelement(a,l,m-1,n);
  else
    return findpeakelement(a,m+1,h,n);
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
    cout<<a[findpeakelement(a,0,n-1,n)];

}
