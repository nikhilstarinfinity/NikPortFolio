#include <iostream>
using namespace std;
#include<unordered_map>
#include<string>

string uniqueChar(string str)
{

//bse case
if(str.size()==1)
{
return str;
}

string st = uniqueChar(str.substr(1));
if(st.find(str[0])<st.size())
{
st[st.find(str[0])]=0;
st=str[0]+st;
return st;
}
else
return str[0]+st;

}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
