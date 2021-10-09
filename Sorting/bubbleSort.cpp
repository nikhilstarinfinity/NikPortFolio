#include<iostream>
using namespace std;

void bubbleSort(int * arr,int n)
{

if(n==1)
{
return;
}

for(int i=0;i<n-1;i++)
{

if(arr[i]>arr[i+1])
{
swap(arr[i],arr[i+1]);
}

}
// last element shi jagah pahuch gya ab me bb recursive call kr rha hu..

bubbleSort(arr,n-1);
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

bubbleSort(a,n);

for(int i=0;i<n;i++)
{

cout<<a[i]<<" ";

}
}


