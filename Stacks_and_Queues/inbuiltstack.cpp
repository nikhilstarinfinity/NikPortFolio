#include<iostream>
using namespace std;

#include<stack>

int main()
{

stack<int> s1;

cout<<s1.size()<<endl;

s1.push(23);
s1.push(13);
s1.push(903);
s1.push(2334);
s1.push(232);
cout<<s1.size()<<endl;

s1.pop();
cout<<s1.size()<<endl;
s1.pop();
cout<<s1.size()<<endl;
cout<<s1.top()<<endl;
cout<<s1.empty()<<endl;

}
