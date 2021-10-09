#include<iostream>
using namespace std;

void insertionSort(int * arr,int n)
{


for(int i=1;i<n;i++)
{

int j=i-1;

int temp = arr[i];

while(j>=0&&arr[j]>temp)
{

arr[j+1]=arr[j];
j--;

}

arr[j+1]=temp;

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

insertionSort(a,n);

for(int i=0;i<n;i++)
{

cout<<a[i]<<" ";

}


}
















