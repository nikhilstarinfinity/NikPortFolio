#include<iostream>
using namespace std;
#include<vector>



int partition(vector<int> &v , int si,int ei)
{


int i=si-1;


for(int j=si;j<ei;j++)
{

if(v.at(j)<v.at(ei))
{

i++;
swap(v.at(i),v.at(j));
}

}

swap(v.at(i+1),v.at(ei));

return i+1;

}














void quickSort1(vector<int> &v,int si,int ei)
{

if(si<ei)
{

int pi=partition(v,si,ei);

quickSort1(v,si,pi-1);
quickSort1(v,pi+1,ei);
}
}




void quickSort(vector<int> &v,int n)
{

int si=0;
int ei=n-1;
quickSort1(v,si,ei);

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

quickSort(v,n);
for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}
}

