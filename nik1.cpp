#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

//LL big=INT_MAX;
/*
void compilercheck()
{

if(sizeof(unsigned long int)==4)
{
cout<<"Compiler is 32-bit\n";
}
else if( sizeof(unsigned long int)==8)
cout<<"compiler is 64-bit"<<endl;
return;

}
int main()
{
char iska[]="abcd";
cout<<&iska<<" "<<strlen(iska)<<endl;

double x;
double y;
/*
cout<<sizeof(char)<<endl;
cout<<sizeof(int)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;
cout<<sizeof(short int)<<endl;
cout<<sizeof(unsigned int)<<endl;
cout<<sizeof(unsigned long int )<<endl;
cout<<sizeof(unsigned long long int )<<endl;
compilercheck();
*/
//i'm calling compiler check...

/*
cout<<"enter base\n";

cin>>x;
cout<<"enter power\n";

cin>>y;
 long  double z=pow(x,y);
cout<<z<<endl;

return 0;
}
*/

int  power(int x,int n)
{

if(n==0)
return 1;

return x*power(x,n-1);
}

pair<int,int> sumofEvenAndOdd(int n)
{


if(n==0)
{
pair<int,int> p;
p.first=0;
p.second=0;
return p;
}

pair<int,int> smallAns=sumofEvenAndOdd(n/10);

int k=n%10;
if(k%2==0)
{
smallAns.first+=k;
return smallAns;
}
else
{
smallAns.second+=k;
return smallAns;
}
}

int main()
{

   int x,n;
    cin>>x>>n;
    
    cout<<power(x,n)<<endl;

}

