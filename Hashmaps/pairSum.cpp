#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;


int pairSum(int *arr, int n) {
	unordered_map<int,int> seen;
	int pc=0;
	for(int i=0;i<n;i++)
	{
	
	if(seen.count(-arr[i])>0)
	{
	pc=pc+seen[-arr[i]];
	
	seen[arr[i]]++;
		}
	else
	seen[arr[i]]++;
	
	}
return pc;	// Write your code here
}

int main()
{

int arr[7]={2,-2,6,2,-6,-2,3};

cout<<pairSum(arr,7);



}
