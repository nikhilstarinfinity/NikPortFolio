#include<iostream>
using namespace std;

void merge(int * arr,int si,int ei)
{

int i=si;
int mid=(si+ei)/2;

int j=mid+1;

int k=0;
int *output=new int[ei+1];
while(i<=mid  && j<=ei)
{
if(arr[i]<arr[j])
{
output[k++]=arr[i++];
}

else
{
output[k++]=arr[j++];

}
}

while(i<=mid)
{
output[k++]=arr[i++];
}


while(j<=ei)
{
output[k++]=arr[j++];
}
int k1=0;
for(i=si;i<=ei;i++)
{
arr[i]=output[k1++];
}

delete [] output;

}




void mergeSort1(int *arr,int si,int ei)
{

int mid = (si+ei)/2;
//base case

if(si>=ei)
{
return;
}

mergeSort1(arr,si,mid);
mergeSort1(arr,mid+1,ei);

merge(arr,si,ei);
}


void mergeSort(int * arr,int size)
{
mergeSort1(arr,0,size-1);
}


int main()
{

int a[]={5,4,3,2,1,0};
mergeSort(a,6);
for(int i=0;i<6;i++)
{
cout<<a[i]<<" ";
}
}


