#include<bits/stdc++.h>
using namespace std;
//#include<cstring>
int LCS(string s1,string s2)
{
//base case yehi enough hai..

if(s1.size()==0 or s2.size()==0)
{
return 0;
}

/*
if(s1.size()==1 and s2.size()==1) iski jarurat nhi hai..
{

if(s1==s2)
{
return 1;
}
else
{
return 0;
}
*/

if(s1[0]==s2[0])
{


int ans = LCS(s1.substr(1),s2.substr(1));
return ans+1;

}

//now 3 cases will arise

int a=LCS(s1.substr(1),s2);
int b=LCS(s1,s2.substr(1));
int c=LCS(s1.substr(1),s2.substr(1));

int ans=max(a,max(b,c));
return ans;
}


int main()
{
string s1;
string s2;
cin>>s1>>s2;

cout<<LCS(s1,s2)<<endl;

}






