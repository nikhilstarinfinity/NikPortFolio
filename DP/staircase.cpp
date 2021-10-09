#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}
/* using memoization...
long staircase(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==1 or n==0)
    {
        return 1;
    }
   
    int *ans=new int[n+1];
    
    for(int i=0;i<n+1;i++)
    {
        ans[i]=-1;
    }
    if(ans[n]!=-1)
    {
        return ans[n];
    }
    
    long a=staircase(n-1);
    
    long b=staircase(n-2);
    long c=staircase(n-3);
    
    ans[n]=a+b+c;
    return ans[n];
    
    
    
    //Write your code here
}
*/
long staircase(int n)
{





}
