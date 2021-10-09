#include<iostream>
using namespace std;
#include "stackUsingArray.cpp"


int main()
{

stackUsingArray<int> s1;

s1.push(10);
s1.push(20);
s1.push(30);
//int x=s1.top();
cout<<s1.isempty()<<endl;
//cout<<x<<endl;
cout<<s1.top()<<endl;
//cout<<s1.data[0]<<endl; jb data public hoga tb ye 0th index ki value la dega..
s1.push(10);

s1.push(102);

s1.push(103);
s1.push(101);
s1.push(1012);
cout<<s1.top()<<endl;
}

