#include<bits/stdc++.h>
using namespace std;


char getChar(int i)
{
return char(i+97);
}



int main()
{
string s;
cin>>s;

map<char,int> m;
int i=0;
while(i<s.length())
{
if(m.count(s[i])==0)
{
m[s[i]]=0;
int j=0;

while(j<s.size())
{

if(s[i]==s[j])

{
m[s[i]]+=1;
}

j++;
}
}
i++;
}

if(m.count('a'))
cout<<m['a']<<" ";
else
cout<<"0"<<" ";


if(m.count('s'))
cout<<m['s']<<" ";
else
cout<<"0"<<" ";


if(m.count('p'))
cout<<m['p']<<" ";
else
cout<<"0"<<" ";


map<char,int> :: iterator itr=m.begin();
/*
if(itr->first=='a' or itr->first=='s' or itr->first=='p')
{
cout<<itr->second<<" ";
}
*/



itr=m.begin();

while(itr!=m.end())
{

cout<<itr->first<<" "<<itr->second<<endl;
itr++;
}
itr=m.begin();
while(itr!=m.end())
{
cout<<itr->first;
itr++;
}
}

	
