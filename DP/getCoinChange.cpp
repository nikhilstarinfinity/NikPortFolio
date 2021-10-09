#include<bits/stdc++.h>
using namespace std;
#define denominations a
 #define numDenominations n
 #define countWaysToMakeChange count
 #define value v
int count_DP(int denominations[], int numDenominations, int value)
{
 
 int **output=new int*[n+1];
 int x,y;
 for(int i=0;i<=n;i++)
 {
 output[i]=new int[v+1];
  }
 
 output[0][0]=1	;
 for(int i=1;i<=v;i++)
 {
 output[0][i]=0;
 }
 
 
 for(int i=1;i<=n;i++)
 {
 output[i][0]=1;
 }
 
 
 for(int j=1;j<=v;j++)
 {
 for(int i=1;i<=n;i++)
 {
 if(j-a[i-1]>=0)
 {
 
  x=output[i][j-a[i-1]];
 }
 else
 x=0;
 
 if(i-1>=0)
 {
 y= output[i-1][j];
 }
 else
 y=0;
 
 
 output[i][j]=x+y;
 
 }
 }
 
 return output[n][v];
 }
 
 
int countWaysToMakeChange(int denominations[], int numDenominations, int value)
{
//ydi sikke hai but value hi nhi hai

if(value==0)	
return 1;//becoz kisi bhi sikke ko na lena bhi 1 solution hai..

//case 2..ydi value hi -ve hai so no soln
if(value<0)
return 0;

//case 3..ydi sikko ki sankhya -ve hai and value kuch non-ve hai.
if(n<=0 && value>=0)
return 0;	

int ans1=count(a,n,value-a[n-1]);
int ans2=count(a,n-1,value);
return ans1+ans2;

}
int main()
{

	int numDenominations;
	cin >> numDenominations;
	
	int *denominations = new int[numDenominations];

	for (int i = 0; i < numDenominations; i++)
	{
		cin >> denominations[i];
	}

	int value;
	cin >> value;

	cout << countWaysToMakeChange(denominations, numDenominations, value)<<endl;
cout<<count_DP(a,n,v)<<endl;
	delete[] denominations;
}


