#include<bits/stdc++.h>
using namespace std;

int main()
{

//priority queue store in sorted order(log n) me kr leta hai

priority_queue<int> pq;
pq.push(1);
pq.push(5);
pq.push(7);
pq.push(6);
cout<<pq.top()<<" "; //7 dega then 6 5 1. desecnding order me dalta jayega mtlb max no will have highest priority 
//but if this comes
priority_queue<pair<int,int>> pqp;
pair<int,int> p1(1,2);
pair<int,int> p2(1,3);
pair<int,int> p3(1,67);
pqp.push(p1);
pqp.push(p2);
pqp.push(p3);
cout<<pqp.top().second<<endl;//67 dega

//reversed priority_queue ese bnao
priority_queue<int,vector<int>,greater<int>> pqrev;
pqrev.push(1);
pqrev.push(5);
pqrev.push(7);
pqrev.push(6);

cout<<pqrev.top()<<" "; //returns 1 here ab arrangement kuch ho chuka hai 1 5 6 7

return 0;
}
