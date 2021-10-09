#include<bits/stdc++.h>
using namespace std;


int minvtx(int* distances,bool* visited,int v)
{

int minVertex=-1;

for(int i=0;i<v;i++)
{

if(!visited[i] and (minVertex==-1 || distances[i]<distances[minVertex]))
{
minVertex=i;
}


}

return minVertex;

}


void dijkstra(int** graph,int v)
{

bool* visited=new bool[v];
int* distances=new int[v];

for(int i=0;i<v;i++)
{
visited[i]=false;
distances[i]=INT_MAX;
}

distances[0]=0;

for(int i=0;i<v;i++)
{

int minVertex=minvtx(distances,visited,v);
visited[minVertex]=true;

for(int j=0;j<v;j++)
{

if(graph[minVertex][j] and distances[minVertex]+graph[minVertex][j]<distances[j])
{
distances[j]=distances[minVertex]+graph[minVertex][j];
}

}

}

for(int i=0;i<v;i++)
{
cout<<i<<" "<<distances[i]<<endl;
}

}

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

dijkstra(graph,v);

for(int i=0;i<v;i++)
{
delete [] graph[i];
}

delete [] graph;
}
