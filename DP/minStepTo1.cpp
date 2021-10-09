#include<iostream>
using namespace std;
#include<climits>
/*
int c1(int n)
{
int a=INT_MAX;
int b=INT_MAX;
int c=INT_MAX;
if(n==1)
{
return 0;
}

n--;

if(n%2==0)
{
n=n/2;
 a= c2(n)+1;
}
else if(n%3==0)
{
n=n/3;
 b= c2(n)+1; 
}

else
{

 c= c2(n)+1;


}




}
*/
int c2(int n)
{

if(n<=1)
{
return 0;
}

 int c= c2(n-1)+1;
int a=INT_MAX;//iske liye climits ka use hua tha..
int b=INT_MAX;//orr bataooo..#include<climits> use kia ki nhi!!! hhahahaha hehehe......S

if(n%2==0)
{
 a= c2(n/2)+1;
}
 if(n%3==0)
{
 b= c2(n/3)+1; 
}

return min(a,min(b,c));

}


int countMinStepsToOne(int n)
{

return c2(n);
	//Write your code here
}
int main()
{

int n;
cin>>n;




cout<<countMinStepsToOne(n)<<endl;
}
