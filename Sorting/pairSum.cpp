#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;


int pairSum(int *arr, int n,int x) {
	unordered_map<int,int> seen;
	int pc=0;
	for(int i=0;i<n;i++)
	{
	
	if(seen.count(x-arr[i])>0)
	{
	pc=pc+seen[x-arr[i]];
	
	seen[arr[i]]++;
		}
	else
	seen[arr[i]]++;
	
	}
return pc;	
}

int main()
{

int arr[7]={2,-2,6,2,-6,-2,3};
int x;
cin>>x;
cout<<pairSum(arr,7,x);



}
