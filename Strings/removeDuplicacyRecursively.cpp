#include<bits/stdc++.h>
using namespace std;

string hatao(string s)
{

if(s.size()==0 or s.size()==1)
{
return s;
}


string smallAns=hatao(s.substr(1));
int i=0;
for( ;i<smallAns.size();i++)
{

if(s[0]==smallAns[i])
{
smallAns[smallAns.find(s[0])]='\0';
smallAns=s[0]+smallAns;
return smallAns;
}
}

return s[0]+smallAns;

}







int main()
{
string s;
cin>>s;

s=hatao(s);
cout<<s<<endl;

}
