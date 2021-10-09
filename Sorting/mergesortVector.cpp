#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int> &vec,int si,int ei)
{

int i=si;
int mid=(si+ei)/2;

int j=mid+1;

int k=0;
vector<int> *output=new vector<int>();
while(i<=mid  && j<=ei)
{
if(vec[i]<vec[j])
{
output->push_back(vec[i++]);
}

else
{
output->push_back(vec[j++]);

}
}

while(i<=mid)
{
output->push_back(vec[i++]);
}


while(j<=ei)
{
output->push_back(vec[j++]);
}
int k1=0;
for(i=si;i<=ei;i++)
{
vec[i]=output->at(k1++);
}

delete  output;

}


void mergeSort1(vector<int> &vec, int si,int ei)
{

int mid = (si+ei)/2;
//base case

if(si>=ei)
{
return;
}

mergeSort1(vec,si,mid);
mergeSort1(vec,mid+1,ei);

merge(vec,si,ei);



} 


void mergeSort(vector<int> &vec, int n){
    
    
    mergeSort1(vec,0,n-1);
    
    // Write your code here.
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

mergeSort(v,n);
for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}
}

