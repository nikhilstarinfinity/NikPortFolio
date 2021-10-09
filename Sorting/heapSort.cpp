#include<iostream>
using namespace std;
#include<vector>
vector<int> heapSort1(vector<int>& arr, int n) {
	
 for(int i=0;i<n-1;i++)
 {
 
 int j=i+1;
 
 while(arr[j]<arr[(j-1)/2])
 {
 swap(arr[j],arr[(j-1)/2]);
 j=(j-1)/2;

 }
}

int hs=n;
while(hs!=0)
{
//cout<<"yha aaya"<<endl;
int t = arr[0];
arr[0]=arr[hs-1];
arr[hs-1]=t;

hs--;
 for(int i=0;i<hs-1;i++)
 {
 
 int j=i+1;
 
 while(arr[j]<arr[(j-1)/2])
 {
 swap(arr[j],arr[(j-1)/2]);
 j=(j-1)/2;

 }
}
}
	
return arr;	
}
vector<int> heapSort(vector<int>& arr, int n) {

vector<int> v = heapSort1(arr,n);

int hs=n;
while(hs!=0)
{
swap(v[0],v[hs-1]);
hs--;
heapSort1(v,hs);
}
return v;
}
/*
if(hs==2)
{

int j=0;
while(arr[j]>arr[2*j+1])
{
swap(arr[j],arr[2*j+1]);
}

}

if(hs!=1 and hs!=2 and hs!=0)
{
//cout<<"yha aaya"<<endl;


int j=0;
int minm=min(arr[2*j+1],arr[2*j+2]);
while(arr[j]>minm)
{

if(minm==arr[2*j+1])
{
swap(arr[j],arr[2*j+1]);
j=2*j+1;
}

if(minm==arr[2*j+2])
{
swap(arr[j],arr[2*j+2]);
j=2*j+2;
}
 minm=min(arr[2*j+1],arr[2*j+2]);

}

}
*/


/*
   int removeMin() {
       
       
        // Write your code here
    }
*/
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

v = heapSort(v,n);
for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}

}
