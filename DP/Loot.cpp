#include<bits/stdc++.h>
using namespace std;



int maxMoneyLooted_DP(int *arr, int n)
{

if(n==-1)
{
return 0;
}
int* output=new int[n+1];
output[0]=0;
output[1]=arr[0];
for(int i=2;i<=n;i++)
{
output[i]=max(output[i-1],output[i-2]+arr[i-1]);
}

return output[n];
}


int maxMoneyLooted_memo(int *arr, int n,int *output)
{


if(n<=0)
{
if(n==0)
{
output[n]=0;
}
return 0;
}
if(output[n]!=-1)
{
return output[n];
}

int ans1=arr[0] + maxMoneyLooted_memo(arr+2,n-2,output);
int ans2=maxMoneyLooted_memo(arr+1,n-1,output);
int ans=max(ans1,ans2);
output[n]=ans;
return ans;

}

int maxMoneyLooted_memo(int *arr, int n)
{
int * output=new int[n+1];
for(int i=0;i<=n;i++)
{
output[i]=-1;
}
return maxMoneyLooted_memo(arr,n,output);

}
int maxMoneyLooted(int *arr, int n)
{

if(n<=0)
{
return 0;
}


int ans1=arr[0] + maxMoneyLooted(arr+2,n-2);
int ans2=maxMoneyLooted(arr+1,n-1);

return max(ans1,ans2);

	//Write your code here
}


int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n)<<endl;
cout <<maxMoneyLooted_memo(arr,n)<<endl;
cout << maxMoneyLooted_DP(arr, n)<<endl;
	delete[] arr;
}


