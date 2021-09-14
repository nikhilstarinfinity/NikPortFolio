#include<bits/stdc++.h>
using namespace std;


bool isfine(int *stall,int s,int c,int d)
{


int cw=1;
int i=1;
int stl=stall[0];
while(cw!=c and i<=s-1)
{
while(i<=s-1 and stall[i]<stl+d)
{
i++;
}

if(i>s-1)
return false;

stl=stall[i];
cw++;
i++;
}

if(cw==c)
return true;
else
return false;

}


int maxd(int* stall,int s,int dmin,int dmax,int c)
{

if(dmin>=dmax)
return dmin;

int mid=(dmin+dmax)/2;

if(isfine(stall,s,c,mid))
{
int ans=mid;
if(isfine(stall,s,c,mid+1))
{
return maxd(stall,s,mid+1,dmax,c);
}
else
{
return ans;
}
}
else
{
return maxd(stall,s,dmin,mid-1,c);
}

}





int main()
{


int t;
cin>>t;

while(t--)
{
int s,cows;
cin>>s>>cows;

int stall[s];

for(int i=0;i<s;i++)
{

cin>>stall[i];

}
sort(stall,stall+s);
int dmin=0;
int dmax=stall[s-1]-stall[0];

cout<<maxd(stall,s,dmin,dmax,cows)<<endl;
}

return 0;
}

