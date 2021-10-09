#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

int main()
{

unordered_map<string,int> mymap;
mymap["abc"]=1;
mymap["abc1"]=2;
mymap["abc2"]=3;
mymap["abc3"]=4;
mymap["abc4"]=5;
mymap["abc5"]=6;
mymap["abc6"]=7;

unordered_map<string,int>:: iterator it=mymap.begin();

while(it!=mymap.end())
{


cout<<"key :"<<it->first<<" value :"<<it->second<<endl;

it++;

}
mymap.erase(it);//erase function me iterator dekr bhi delete kr skte hai.. mymap.erase(key) jese hi delte ho jaygea element..
//similarly ye erase function vector , ordered map,unordered_map,ordered set , unordered set sb pr bhi use hoga...(worl karega)..
mymap.erase(it,it+5);//ye 0 to 4 tk ke elements ko delete kr dega..perfect!!!

vector<int> v;
v.push_back(45);

v.push_back(4);
v.push_back(42);
v.push_back(412);
v.push_back(4533);
v.push_back(454553);
v.push_back(4557);
v.push_back(4545);
v.push_back(45808);
vector<int> :: iterator it1=v.begin();
while(it1!=v.end())
{
cout<<*it1<<endl;
it1++;
}

}
