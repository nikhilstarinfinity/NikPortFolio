#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
string st;

map<string,int> m;
//pair<char,int> p('v',4);
//m.insert('v',4);//insert krte time pair dena hota hai..q ki ese hi map defined hai..so yha is line me error dega
m["rsni"]=4;
m["t"]=89048;
/*
m['u']=89048;
m['w']=89048;
m['x']=89048;
m['y']=89048;
*/
map<string,int> :: iterator it=m.begin();
cout<<"size :"<<m.size()<<endl;
cout<<"count of m('v') "<<m.count("rsni")<<endl;
//cout<<"capacity :"<<m.capacity()<<endl;//capacity nam ka koi member fun nhi hota map ya unordered map me..	
while(it!=m.end())
{
cout<<it->first<<" "<<it->second<<endl;
it++;
}

cout<<m["rsni"]<<" "<<endl;

for(int i=0;i<5;i++)
{
st+=i+'a';
}
cout<<st<<endl;
string str = st.substr(1);
cout<<str<<endl;
cout<<st.find("c")<<endl;
st[st.find('c')]=0;
cout<<st<<endl;
int a=65;
char c=66;
//cout<<c<<endl; // implicit typecasting kehte hai ise..
//B print hoga..



}
