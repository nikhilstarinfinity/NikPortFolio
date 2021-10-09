#include <bits/stdc++.h>
using namespace std;
#include<cmath>
int minCount(int n) // using memoization
{
    if(n<=0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
   int *ans=new int[n+1];
	for(int i=0;i<=n;i++)
    {
        ans[i]=-1;
    }
    
    if(ans[n]!=-1)
    {
        return ans[n];
    }
    
    int min=INT_MAX;
   // cout<<sqrt(5)<<endl;
    for(int i=1;i<=sqrt(n);i++)
    {
    int b = n-pow(i,2);
        //cout<<b<<endl;
     int a= minCount(b);
       // cout<<a<<endl;
        if(min>a)
        {
            min=a;
        }
    }
    ans[n]=min+1;
    return ans[n];
    
    //Write your code here
}
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}
