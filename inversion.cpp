#include<bits/stdc++.h>
using namespace std;
int inv=0;
void merge(int *a,int l,int m,int h)
{
  int n1=m-l+1;
  int n2=h-m;
  int i,j,k;
  int L[n1],R[n2];
  for(i=0;i<n1;i++)
    L[i]=a[i+l];
  for(j=0;j<n2;j++)
    R[j]=a[m+1+j];
  i=0;j=0;k=l;
  while(i<n1&&j<n2)
  {
    if(L[i]<=R[j])a[k++]=L[i++];
    else {a[k++]=R[j++];inv+=m-l-i+1;}
  }
  while(i<n1)a[k++]=L[i++];
  while(j<n2)a[k++]=R[j++];

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
  cout<<inv<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
