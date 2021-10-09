#include<bits/stdc++.h>
using namespace std;

int countways(int a[],int n,int v)
{

int count[v+1];
memset(count,0,sizeof(count));
count[0]=1;

for(int i=1;i<=v;i++)
{
for(int j=0;j<n;j++)
{

if(i>=a[j])
{
count[i]+=count[i-a[j]];
}
}
}

return count[n];

}

// CPP program to illustrate memset

int main()
{
int n;
cin>>n;


	int str[n];
	
	for(int i=0;i<n;i++)
	{
	cin >> str[i];
	}
	int v;
	cin>>v;
	cout<<countways(str,n,v);
	return 0;
}

