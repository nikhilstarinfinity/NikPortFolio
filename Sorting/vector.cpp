#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main()
{
int are[13]={1,2,2,2,2,3,3,3,3,4,4,4,4};
cout<<are<<endl;
for(auto i:are)
{
cout<<i<<" ";
}
cout<<"\n";

sort(are,are+13);
int *ito = unique(are,are+13);
int sz=distance(are,ito);

for(int i=0;i<sz;i++)
{
cout<<are[i]<<" ";
}

cout<<"\n";

vector<int> vu{1,2,2,2,2,3,3,3,3,4,4,4,4};
for(auto i : vu)
{
cout<<i<<" ";
}
cout<<"\n";
sort(vu.begin(),vu.end());
vector<int> :: iterator it = unique(vu.begin(),vu.end());
vu.resize(distance(vu.begin(),it));
for(auto i : vu)
{
cout<<i<<" ";
}


vector<vector<int>> v;
//v1.push_back(23);
int n;
cout<<"how many vectors u want ?"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
vector<int> v1;
int m;
cout<<"give size of "<<i+1<<"th vector"<<endl;
cin>>m;
cout<<"ok..now enter the elements in "<<i+1<<"th vector"<<endl;

for(int j=0;j<m;j++)
{
int a;
cin>>a;
v1.push_back(a);
}

v.push_back(v1);
}

for(int i=0;i<v.size();i++)
{
for(int j=0;j<v.at(i).size();j++)
{
cout<<v.at(i).at(j)<<" ";
}
cout<<endl;
}


int * a=new int[3];
a[0]=1;
a[1]=2;
a[2]=3;

}

/*
vector<int>* vp=new vector<int>(3,4);
vector<int> v;

//vp[5]=43; error dega q ki ye access krne k liye hota hai ...new element enter krne k liye nhi hota hai
//cout<<vp[5]<<endl;
cout<<sizeof(vp)<<endl;
cout<<sizeof(v)<<endl;
vp->push_back(3);
cout<<vp->at(0)<<endl;
cout<<vp->size()<<endl;
cout<<vp->capacity()<<endl;
vp->pop_back();
delete vp;
cout<<vp->at(2)<<endl;

int arr[]={3,4,5,6};
cout<<sizeof(arr)<<endl;
cout<<sizeof(arr)/sizeof(arr[0])<<endl;
}
/*
vector<int> v;
v.push_back(20);
v.push_back(1132);
v.push_back(10);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

cout<<v.at(0)<<endl;
cout<<v[0]<<endl;
cout<<&v<<endl;

v.pop_back();
cout<<v.size()<<endl;
cout<<v[0]<<endl;
cout<<v.at(1)<<endl;
//cout<<v.at(0)<<endl;
cout<<&v<<endl;

v.pop_back();
cout<<v[1]<<endl;
//cout<<v.at(1)<<endl;

*/
/*
//diff ways to initialize vectors..
//1.
   vector<int> vect;
   //2.
   // Create a vector of size n with
    // all values as 10.
    vector<int> vect(n, 10);
    //3.intiialize vector like an array
     vector<int> vect{ 10, 20, 30 }; //but beware it may give segm  fault some time
//4.initializing from an array
 vector<int> vect{ 10, 20, 30 };
 
 //5.initialize a vector from
// another vector.
vector<int> vect1{ 10, 20, 30 };
 
    vector<int> vect2(vect1.begin(), vect1.end());
    //6.Initializing all elements with a particular value
    vector<int> vect1(10);
    int value = 5;
    fill(vect1.begin(), vect1.end(), value);
}*/
