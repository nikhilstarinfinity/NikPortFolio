#include<iostream>
using namespace std;
#include<stack>


void reverseStack(stack<int> &input,stack<int> &extra)
{


if(input.size()==0||input.size()==1)
{
return;
}

int x=input.top();
input.pop();

reverseStack(input,extra);


while(input.size()!=0)
{

extra.push(input.top());
input.pop();
}

input.push(x);

while(extra.size()!=0)
{
input.push(extra.top());
extra.pop();
}

}











int main()
{

stack<int> s;
stack<int> e;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

cout<<s.top()<<endl;
reverseStack(s,e);

cout<<s.top()<<endl;






}

