#include <bits/stdc++.h>
using namespace std;


int minCostPath(int **input,int i,int j, int m, int n)
{


if(i==m-1 and j==n-1)
{
return input[i][j];
}

int x=INT_MAX;
if(j!=n-1)
{
  x = minCostPath(input,i,j+1,m,n);
}
int y=INT_MAX;
if(i!=m-1)
{
  y = minCostPath(input,i+1,j,m,n);
}
int z=INT_MAX;
if(i!=m-1 and j!=n-1)
{
  z = minCostPath(input,i+1,j+1,m,n);
}

int ans=min(x,min(y,z)) + input[i][j];
return ans;


}
int minCostPath(int **input, int m, int n)
{

int i=0;
int j=0;
return minCostPath(input,i,j,m,n);
	//Write your code here
}

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}
