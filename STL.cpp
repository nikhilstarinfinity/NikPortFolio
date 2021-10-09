#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];

}
int is=6;
int s=accumulate(arr,arr+n,is);
cout<<s;

}

