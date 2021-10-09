#include<iostream>
using namespace std;

void selectionSort(int * arr,int n)
{

for(int i=0;i<n;i++)
{
int min=i;


for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
min=j;
}
}
swap(arr[min],arr[i]);
}
}


int main()
{
int n;
cin>>n;

int a[n];
cout<<"enter elements "<<endl;

for(int i = 0; i<n;i++)
{

cin>>a[i];

}

selectionSort(a,n);

for(int i=0;i<n;i++)
{

cout<<a[i]<<" ";

}


}


