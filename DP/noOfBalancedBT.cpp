
#include<iostream>
#include<cmath>
using namespace std;

long long int balancedBTs(int n) {

if(n==0)
{
return 1;
}


if(n==1)
{
return 1;
}
long long int c=pow(10,9)+7;  //yha long long int datatype rkhna yaar..nhi toh out of range ans aayega...pagal ho jaoge..mod lete vakt datatype bhi range ke according hi lena pdta hai... means ans<=1000000007(ye int ke rang k bahr hai so long long int use krna pdega...)

long long int a=balancedBTs(n-1);
long long int b=balancedBTs(n-2);
a=a%c;
b=b%c;
long long int a1=(a%c)*(a%c);
a1=a1%c;
long long int a2=2*(a%c)*(b%c);
a2=a2%c;
long long int ans=a1%c+a2%c;
ans=ans%c;
return ans;
}


int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
