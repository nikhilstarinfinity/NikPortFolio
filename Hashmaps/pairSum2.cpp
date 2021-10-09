#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int x)
{

   int n=arr.size();
    	unordered_map<int,int> seen;
	vector<vector<int>> ans;
	for(int i=0;i<n;i++)
	{
	
	if(seen.count(x-arr[i])>0)
	{
	//pc=pc+seen[x-arr[i]];
	int h=seen[x-arr[i]];
	while(h--)
	{
	vector<int> a;
	a.push_back(x-arr[i]);
	a.push_back(arr[i]);
	ans.push_back(a);
	}
	seen[arr[i]]++;
	
		}
	else
	seen[arr[i]]++;
	
	}
return ans;	
   
    
}

int main()
{
int n,s;
cin>>n>>s;
vector<int> arr(n,0);
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<vector<int>> ans=pairSum(arr,s);
for(int i=0;i<ans.size();i++)
{
//cout<<ans.size()<<endl;

//cout<<ans[0].size()<<endl;
for(int j=0;j<ans[0].size();j++)
{
cout<<ans[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
