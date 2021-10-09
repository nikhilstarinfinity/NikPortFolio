#include<iostream>
using namespace std;
#include<climits>

int countStepsToOne(int n)
{

int *ans = new int[n+1];

ans[0]=0;
ans[1]=0;
ans[2]=1;
ans[3]=1;


int b=INT_MAX;
for(int i=4;i<=n;i++)
{
int a=ans[i-1]+1;
int b=INT_MAX;
int c=INT_MAX;
if(i%2==0)
{
 b=ans[i/2]+1;
}
if(i%3==0)
{
 c=ans[i/3]+1;
}

ans[i]=min(a,min(b,c));

}

return ans[n];

	//Write your code here
}



int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}
