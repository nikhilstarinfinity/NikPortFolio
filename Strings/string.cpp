#include<bits/stdc++.h>
using namespace std;
//#include<cstring>






void removeSpaces(string input)
{


 string s=input;
 //s.erase(remove(s.begin(),s.end(),' '),s.end());
//s.erase() isse pure string remove/erase ho jayegi
//s.erase(1,4) isse 1st index se lekr k 4 elements erase!!!
//s.erase(1) isse 0th idx vle char ko chod baki sb kuch remove
 string :: iterator sp=remove(s.begin(),s.end(),' ');   //remove(s.begin(),s.end(),element) aapko s me shuru se end tk sbhi element remove kr dega.. and end ptr of the  new updated string lakr dega 
 string :: iterator it=s.begin();
while(it!=sp)
{
cout<<*it;
it++;
}
}
int main()
{
/*
int *a=new int;
a=3453;
cout<<*a<<endl;
*/
string *s1=new string;//inbuilt class hoti he string and iski size 32 bytes hoti hai..fixed!!!jese int->4,char->1,float->4,double->8,long->8,short int->2,long int->8,long long int->8,long double->16
cin>>*s1;
cout<<*s1<<endl;
cout<<s1->substr(1,0)<<endl;
char ch[]={"CharArray"};
char *c=new char[6];
c[0]='f';
c[1]='g';
int a[]={1,2,3,4};

cout<<"sizeof(*s1) "<<sizeof(*s1);//yha 32 aayega qki sizeof() function jitni mem allocate hui hai/jitna space cover kr rha hai vo lake dega
cout<<" "<<*c<<endl<<sizeof(*c)/sizeof(c[0])<<" "<<strlen(c)<<" Size of ch[] "<<sizeof(ch);
//strlen is defined in header ‘<cstring>’ so use bhi include kro; 
//strlen hamesha constant char* as an argument leta hai..  
cout<<"\n sizeof(char) "<<sizeof(char)<<endl;
cout<<" sizeof(short int) "<< sizeof(short int)<<endl;
cout<<" sizeof(int) "<<sizeof(int)<<endl;
cout<<" sizeof(float) "<<sizeof(float)<<endl;
cout<<" sizeof(long int) "<< sizeof(long int)<<endl;
cout<<" sizeof(double) "<< sizeof(double)<<endl;
cout<<" sizeof(long long int) "<< sizeof(long long int)<<endl;
cout<<" sizeof(long double ) "<< sizeof(long double )<<endl;
cout<<" sizeof(string) "<<sizeof(string)<<endl;//char array ki tarh bhi treat kr skte ho ..just this that chize aasan ho gyi hai..😀️

}

