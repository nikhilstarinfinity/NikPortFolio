#include<bits/stdc++.h>
using namespace std;

int main()
{

unordered_set<int> unst;
//sbhi same honge 
//O(1) same as unorderd_map hahahhaahha....
//O(n) 








// initialize krne ka bhi tarika bahut easy kr skte hai 
//see
set<int> st{1,2,3,4,5,56,6,68,88,7}; //sorted order me store krta hai

set<int> st;
st.insert(1);  //{1}
st.insert(2);//{1,2}
st.emplace(3);//ye bhi same as insert new element add kr deta hai..but it's (emplace)  just a bit faster ur marzi koi bhi use kro 
set<int> :: iterator  itr=st.begin();
cout<<"Size "<<st.size()<<endl;


for(auto it=st.begin();it!=st.end();it++)
{
cout<<*it<<" ";
}

cout<<endl;
for(auto it : st) //wow what a  best way i liked it!!! very  much!!! great great great!!!
{
cout<<it<<" ";
}

cout<<endl;


while(itr!=st.end())
{
cout<<*itr<<" ";
itr++;
}

auto il=st.find(2);  //log n me work krta hai
auto il=st.find(89); //ydi element exist nhi krta toh set k end ko point krega shi pkde ekdum!!!  
//cout<<il<<endl;
vector<int>* v=new vector<int>(3,4);
v->push_back(4);
auto it=v->begin();
for( ;it!=v->end(); it++)
{
cout<<*it<<" ";
}
cout<<"vector "<<v->at(0)<<endl; 













return 0;
}


