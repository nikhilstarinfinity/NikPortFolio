#include<bits/stdc++.h>
using namespace std;
#define W Whis
#define B Beerus
string findWinner_DP(int n, int x, int y)
{

string* dp=new string[n+1];

dp[1]="Beerus";



for(int i=2;i<=x;i++)
{
dp[i]="Beerus";
}

for(int i=2;i<=y;i++)
{
dp[i]="Beerus";
}

for(int i=max(x,y)+1;i<=n;i++)
{

if(dp[i-1]=="Beerus" and dp[i-x]=="Beerus" and dp[i-y]=="Beerus")
{
dp[i]="Whis";
}
else
dp[i]="Beerus";
}

return dp[n];

}
string findWinner(int n, int x, int y)
{
	
	if(n<=1)
	{
	string ans="Beerus";
	return ans;
	}
	
	if(n<=x)
	{
	string ans="Beerus";
	return ans;
	}
	
	
	if(n<=y)
	{
	string ans="Beerus";
	return ans;
	}
	
	string beta1=findWinner(n-1,x,y);
	string beta2=findWinner(n-x,x,y);
	string beta3=findWinner(n-y,x,y);
	
	string ans;
	if(beta1=="Beerus" and beta2=="Beerus" and beta3=="Beerus")
	{
	ans="Whis";
	return ans;
	}
	else
	{
	ans="Beerus";
	return ans;
	}
	
		// Write your code here .
}


int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	cout << findWinner_DP(n, x, y);
}
