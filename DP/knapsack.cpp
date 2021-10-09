#include<bits/stdc++.h>
using namespace std;

int knapsack_memo(int* weight, int* value, int n, int maxWeight,int ** output) {

int m = maxWeight;

if(n==0 ) //|| weight[0]>maxWeight bahut bdi gadbad kr rha tha ye yha pr so please avoid and don't commit such mistakes...
{
output[n][m]=0;
return 0;
}
if(output[n][maxWeight]!=-1)
{
return output[n][maxWeight];
}
/*3   
10 3 5
5 7 1
16
*/

else
{

int b=knapsack_memo(weight+1,value+1,n-1,maxWeight,output);
//cout<<n<<"th "<<b<<endl;
//cout<<"maxwt "<<maxWeight<<endl;
int newmaxW=maxWeight-weight[0];
//cout<<newmaxW<<endl;
int a=INT_MIN;
if(newmaxW>=0)
{
 a=knapsack_memo(weight+1,value+1,n-1,newmaxW,output)+value[0];
}
//cout<<a<<endl;
int ans=max(a,b);
//cout<<ans<<endl;

output[n][maxWeight]=ans;



return ans;

}

}
int knapsack_memo(int* weight, int* value, int n, int maxWeight) {
	
	
	int ** output=new int*[n+1];
	int m=maxWeight;
for(int i=0;i<=n;i++)
{
output[i]=new int[m+1];
}

for(int i=0;i<=n;i++)
{
for(int j=0;j<=m;j++)
{
output[i][j]=-1;
}
}

return knapsack_memo(weight,value,n,m,output);	
	
	// Write your code here
}

int knapsack(int *weights, int *values, int n, int maxWeight)
{

if(n==0)
{
return 0;
}

if(n==1)
{
if(weights[0]>maxWeight)
return 0;
else
return values[0];
}




int b=knapsack(weights+1,values+1,n-1,maxWeight);

int newmaxW=maxWeight-weights[0];
int a=INT_MIN;
if(newmaxW>=0)
{
 a=knapsack(weights+1,values+1,n-1,newmaxW)+values[0];
}
//cout<<a<<endl;
int ans=max(a,b);
return ans;


	//write your code here
}

int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << knapsack(weights, values, n, maxWeight) << endl;
		cout << knapsack_memo(weights, values, n, maxWeight) << endl;

	delete[] weights;
	delete[] values;
}


