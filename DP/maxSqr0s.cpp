#include<bits/stdc++.h>
using namespace std;
#define findMaxSquareWithAllZeros fz
int fz(int **arr, int n, int m,int s)
{


if(n==0)
return 0;

if(n==1)
return 1;







int ans=fz(arr+1,n-1,m,s+1);

int mn=min(n-1,m);
if(ans<mn)
{
return ans;
}
bool allzero=false;
		for (int j = 0; j < m; j++)
		{
		if(arr[0][j]==0)
		allzero=true;
		else
		{
		allzero=false;
                 break;
 }
 }
 if(allzero)
 {
 
 for(int i=1;i<n;i++)
 {
 if(arr[i][0]==0)
 allzero=true;
 else
 {
 allzero=false;
 break;
 }
 }
 if(allzero)
 return ans+1;
 else
 return ans;

}
}

int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
	
	int s=0;
return fz(arr,n,m,s);	
	
	
	//Write your code here
}

/*
void print(int** arr,int n,int m)
{	
for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout<<endl;
	}

}
*/

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];
	
	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			}
		}
	//print(arr+1,n-1,m);
	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}
