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
void mergesort(int *a,int l,int h)
{
  if(l<h)
  {
    int m=(l+h)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);
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
  mergesort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
