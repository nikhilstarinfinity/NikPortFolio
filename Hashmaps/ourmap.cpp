#include<iostream>
using namespace std;
#include "ourmap.h"

int main()
{

ourmap<int> mymap;
for(int i=0;i<10;i++)
{

char c='0'+i;
string key="abc";
key=key+c;
int value=i+1;
mymap.insert(key,value);
//cout<<"chla"<<endl;
}

cout<<mymap.size()<<endl;


}



