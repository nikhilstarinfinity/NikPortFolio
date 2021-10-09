#include<bits/stdc++.h>
using namespace std;

int getminvtx(int * weight,bool* visited,int v)
{

int minVertex=-1;

for(int i=0;i<v;i++)
{
if(!visited[i] and (minVertex==-1 || weight[i]<weight[minVertex]))
{
minVertex=i;
}

}

return minVertex;
}

void prims(int ** graph,int v,int e)
{

bool* visited=new bool[v];
int* weight=new int[v];
int* parent=new int[v];

for(int i=0;i<v;i++)
{
weight[i]=INT_MAX;
visited[i]=false;
}

parent[0]=-1;
weight[0]=0;

for(int j=0;j<v;j++)
{
int minVertex=getminvtx(weight,visited,v);
visited[minVertex]=true;
for(int i=0;i<v;i++)
{

if(graph[minVertex][i] and !visited[i])
{
if(graph[minVertex][i]<weight[i])
{
weight[i]=graph[minVertex][i];
parent[i]=minVertex;
}
}

}
}

for(int i=1;i<v;i++)
{

if(parent[i]<i)
cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
else
cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
}


}
//commited in git
int main()
{

int v,e;
cin>>v>>e;
int ** graph=new int*[v];

for(int i=0;i<v;i++)
{
graph[i]=new int[v];
}

for(int i=0;i<v;i++)
{

for(int j=0;j<v;j++)
{
graph[i][j]=0;
}


}

for(int i=0;i<e;i++)
{

int s,e,w;
cin>>s>>e>>w;
graph[s][e]=w;
graph[e][s]=w;
}

cout<<endl;
prims(graph,v,e);

for(int i=0;i<v;i++)
{
delete [] graph[i];
}

delete [] graph;
}
