#include <iostream>
using namespace std;
#include<unordered_map>
#include<string>
string uniqueChar(string str) {
	unordered_map<char,char> map1;
   
    for(int i=0;i<str.length();i++)
    {
        map1[str[i]]=str[i];
      //  cout<<"aya"<<endl;
    }
    string op;
    for(int i=0;i<str.length();i++)
    {
    unordered_map<char,char>:: iterator it=map1.begin();
    cout<<"yh b"<<endl;
    if(it==map1.end())
    {
    break;
    }
   while(str[i]!=it->second and it!=map1.end())
   {
   
   it++;
   
   }
   if(it==map1.end())
   {
   cout<<"ye"<<endl;
   continue;
   }
   cout<<"yha"<<endl;
   op+=it->second;
   map1.erase(it);
   }
   
    return op;
// Write your code here
}
int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
