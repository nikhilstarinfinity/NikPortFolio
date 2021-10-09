#include<iostream>
using namespace std;
#include<vector>
void selectionSort(vector<int>& arr, int n)
{   

for(int i=0;i<n;i++)
{
int min=i;


for(int j=i+1;j<n;j++)
{
if(arr.at(j)<arr.at(min))
{
min=j;
}
}

swap(arr.at(i),arr.at(min));
}
}

int main()
{

vector<int> v;
cout<<"enter elements size and then elements"<<endl;
int n;
cin>>n;
int i=0;
while(i!=n)
{
int a;
cin>>a;
v.push_back(a);
i++;
}

selectionSort(v,n);
for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}
}

