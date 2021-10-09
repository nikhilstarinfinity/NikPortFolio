#include<iostream>
using namespace std;
#include<vector>

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    
   vector<int> output;
   
   for(int j=0;j<mCols;j++)
   { 
   if(j%2==0)
   {
    
    for(int i=0;i<nRows;i++)
    {
   
   output.push_back(arr.at(i).at(j));
   }
    }
    else
    {
   for(int i=nRows-1;i>=0;i--)
    {
   
   output.push_back(arr.at(i).at(j));
   }
   }
   }
     return output;    
    //Write your code here
}
int main()
{
vector<vector<int>> v;
cout<<"enter n and m "<<endl;
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{
vector<int> v1;
for(int j=0;j<m;j++)
{
int a;
cin>>a;

v1.push_back(a);

}
v.push_back(v1);

}

vector<int> output = wavePrint(v,n,m);

for(int i=0;i<n*m;i++)
{

cout<<output.at(i)<<" ";
}
}
