#include<bits/stdc++.h>
using namespace std;




int getAllWays(int a,int b,int i,int s)
{

int ans=0;

int p=pow(i,b);

while(p+s<a)
{

ans+=getAllWays(a,b,i+1,s+p);
i++;
p=pow(i,b);

}


if(s+p==a)
ans++;


return ans;

}




int getAllWays(int a, int b) {
	

return getAllWays(a,b,1,0);

	// Write your code here
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << getAllWays(a, b);
}
