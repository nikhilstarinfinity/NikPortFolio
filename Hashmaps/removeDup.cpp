#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDup(vector<int> v,int n)
{

vector<int> output;
unordered_map<int,bool> seen;

for(int i=0;i<n;i++)
{
if(seen.count(v[i])>0)
{
continue;
}

seen[v[i]]=true;
output.push_back(v[i]);

}
return output;
}

int main()
{

vector<int> v;
cout<<"enter size "<<endl;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int a;
cin>>a;
v.push_back(a);
}

vector<int> op = removeDup(v,n);
for(int i=0;i<op.size();i++)
{
cout<<op[i]<<" ";
}
}
