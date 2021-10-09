#include<iostream>
using namespace std;
#include<stack>
#include<string>
bool checkRedundantBrackets(string expression)
{

string str=expression;

stack<char> s;

int count=0;

for(int i=0;i<str.length();i++)
{

if(str[i]!=')')
{
s.push(str[i]);
}
else
{
count=0;
while(s.top()!='(')
{

s.pop();
count++;
}
s.pop();
if(count==0||count==1)
{
return true;

}
}
}
//cout<<"ye"<<endl;
if(s.empty())
{
return count==0||count==1;
}

}


int main()
{

string input;
cin>>input;

cout<<checkRedundantBrackets(input);


}










