#include<iostream>
using namespace std;
#include<string>
#include<stack>

bool isBalanced(string expression)
{
string str=expression;
stack<char> s1;
char x;

for(int i=0;i<expression.size();i++)
{
if(str[i]=='{'||str[i]=='['||str[i]=='(')
{
s1.push(str[i]);
continue;
}

if(s1.empty())
{
return false;
}


switch(str[i]){

case ')':
x=s1.top();
s1.pop();
if(x=='{'||x=='[')
{
return false;
}
break;

case ']':
x=s1.top();
s1.pop();
if(x=='{'||x=='(')
{
return false;
}
break;

case '}':
x=s1.top();
s1.pop();
if(x=='('||x=='[')
{
return false;
}
break;

}

}
return s1.empty();
}













int main()
{

string s;
cin>>s;

cout<<isBalanced(s)<<endl;
}



