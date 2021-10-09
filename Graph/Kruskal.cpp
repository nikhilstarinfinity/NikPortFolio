#include<bits/stdc++.h>
using namespace std;



class edge
{
public:
int source;
int dest;
int weight;

  
};

int getParent(int v,int* parent)
{

if(parent[v]==v)
{
return v;
}

return getParent(parent[v],parent);

}

bool compareWeight(edge e1,edge e2)
{
return e1.weight<e2.weight;
}

void Kruskal(edge *input,int v,int e)
{

sort(input,input+e,compareWeight);  //sort function O(nlogn) time complexity lega and O(logn) space lega..😄️

int parent[v];
for(int i=0;i<v;i++)
{
parent[i]=i;
}

int count=0;

edge output[v-1];
int i=0;



while(count!=v-1)
{

edge e=input[i];

int parentSource=getParent(e.source,parent);
int parentDest=getParent(e.dest,parent);

if(parentSource!=parentDest)
{

output[count]=e;
count++;
parent[parentSource]=parentDest;
}

i++;

}

for(int i=0;i<v-1;i++)
{
if(output[i].source<output[i].dest)
{
cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
}
else
{
cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;

}
}

}
int main()
{

int v,e;
cin>>v>>e;

edge input[e];

for(int i=0;i<e;i++)
{
int source;
int dest;
int weight;

cin>>source>>dest>>weight;
input[i].source=source;
input[i].dest=dest;
input[i].weight=weight;

}

kruskal(edge,v,e);


}
