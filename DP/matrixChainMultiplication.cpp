#include<bits/stdc++.h>
using namespace std;

int MCM_DP(int * a,int n)
{

int output[n][n];

for(int i=1;i<n;i++)
{
output[i][i]=0;

}

for(int l=1;l<n-1;l++)
{
for(int i=1;i<n-l;i++)
{

output[i][i+l]=min(output[i+1][i+l]+a[i-1]*a[i]*a[i+l],output[i][i+l-1]+a[i-1]*a[i+l]*a[i+l-1]);
}
}
return output[1][n-1];

}
/*
int MCM_DP(int * a,int s,int e)
{
int n=e;
int** output=new int*[n];

for(int i=0;i<n;i++)
{
output[i]=new int[n];
}

for(int s=0;s<n;s++)
{

output[s][s]=0;
output[s][s+1]=0;
}
/*
for(int s=n-2;s>=0;s--)
{

output[s][e]=output[s][s+1]+output[s+1][n]+a[s]*a[s+1]*a[n];

}

int prev=output[s][e];
for(int e=2;e<=n;e++)
{

output[s][e]=output[s][e-1]+output[e-1][e]+a[s]*a[e-1]*a[e];
}
output[s][e]=min(prev,output[s][e]);

int prev=INT_MAX;
int ans;
for(int s=0;s<n;s++)
{
for(int e=2+s;e<=n;e++)
{
for(int k=s+1;k<=e-1;k++)
{
output[s][e]=output[s][k]+output[k][e]+a[s]*a[k]*a[e];
}
}
ans=min(prev,output[s][e]);
prev=ans;

}

return output[s][e];
}
*/




int MCM(int * a,int s,int e)
{


//base case
if(s==e or s==e-1)
return 0;

int prev=INT_MAX;
int ans;
for(int k=s+1;k<=e-1;k++)
{

 ans = MCM(a,s,k)+MCM(a,k,e)+a[s]*a[k]*a[e]; 
ans=min(prev,ans);
prev=ans;
}

return ans;

}

int matrixChainMultiplication(int* arr, int n) {
 
 
 return MCM_DP(arr,n);
 
 
 
    // Write your code here
}






int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
   cout<<matrixChainMultiplication(arr,n+1)<<endl;
    }
