#include<bits/stdc++.h>
using namespace std;



//inbuilt binary_search bhi hota hai
//vector<int> arr{1,2,3,4,5};
//bool a=binary_search(arr.begin(),arr.end(),4);
 //it will give =1(true);



1.{10, 15, 20, 25, 30, 35};
2.{10, 15, 20, 20, 25, 30, 35};
3.{10, 15, 25, 30, 35};


//lower_bound bhi hota hai..
int* ptr=lower_bound(arr.begin(),arr.end(),x=20); //1.ye x ki first occurance ka ptr lake dega yani 20 ka ptr 
//2. agar multiple times occour ho rha toh  pehli bar vale x yani (2nd index)  ka pointer    lake dega 
//3. no occurance pr usse just bde vale ka ptr yani 25 ka ptr!!! 
//to get index we will subtract lower_bound(....)-arr.begin() off course!!! very easy!!! done!! great!!!

int* ptr=upper_bound(arr.begin(),arr.end(),x=20); //1.ye x se bde  ka ptr lake dega yani 20 ka ptr 
//2. agar multiple times occour ho rha toh  last bar vale x se just bde vale ka pointer    lake dega yani 25 ka ptr
//3. no occurance pr usse just bde vale ka ptr yani 25 ka ptr
//to get index we will subtract lower_bound(....)-arr.begin() off course!!! very easy!!! done!! great!!!







int binarysearch2(int* arr,int si,int ei,int x)
{

if(si>ei)
return -1;


int mid=(si+ei)/2;
if(x==arr[mid])
return mid;

if(x<arr[mid])
return binarysearch2(arr,si,mid-1,x);
else
return binarysearch2(arr,mid+1,ei,x);


}


int binarysearch(int* arr,int n,int x)
{

return binarysearch2(arr,0,n-1,x);

}




int main()
{
int n;
cin>>n;
int *arr=new int[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int x;
cin>>x;
cout<<binarysearch(arr,n,x);
}
