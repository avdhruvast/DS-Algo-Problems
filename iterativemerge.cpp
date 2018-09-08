#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int l,int m,int h)
{
  int i,j,k;
  int n1=m-l+1;
  int n2=h-m;
  int L[n1],R[n2];
  for(i=0;i<n1;i++)
  {
    L[i]=a[i+l];
  }
  for(j=0;j<n2;j++)
  {
    R[j]=a[j+m+1];
  }
  i=0,j=0;
  k=l;
  while(i<n1 && j<n2)
  {
    if(L[i]>R[j])
    {
      a[k++]=R[j++];
    }
    else
    {
      a[k++]=L[i++];
    }
  }
  while(i<n1)
  {
    a[k++]=L[i++];
  }
  while(j<n2)
  {
    a[k++]=R[j++];
  }
}
void mergesort(int *a,int n)
{
  int s,l;
  for(s=1;s<n;s*=2)
  {
    for(l=0;l<n-1;l+=2*s)
    {
      int m=l+s-1;
      int h=min(l+2*s-1,n-1);
      merge(a,l,m,h);
    }
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
  mergesort(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
