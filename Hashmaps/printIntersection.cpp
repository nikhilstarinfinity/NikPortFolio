#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void intersection(int *arr1, int *arr2, int n, int m) 
{
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
  int i=0,j=0;
  while(i!=n and j!=m)
  {
  
  if(arr1[i]==arr2[j])
  {
  cout<<arr1[i]<<" ";
  i++;
  j++;
  }
  else
  {
  
  if(arr1[i]<arr2[j])
  i++;
  else
  j++;
  
  }
  
  }
  }
  
  
    //Write your code here
/*
7 5
6 2 6 2 1 9 8
3 6 8 2 9
*/
int main()
{
int n;
int m;

cout<<"enter size of arrays"<<endl;
cin>>n>>m;
int arr1[n];
int arr2[m];

for(int i=0;i<n;i++)
{
cin>>arr1[i];
}

for(int j=0;j<m;j++)
{
cin>>arr2[j];
}

intersection(arr1,arr2,n,m);
}
