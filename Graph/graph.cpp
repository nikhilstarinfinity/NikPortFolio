#include<bits/stdc++.h>
using namespace std;


void printBFS(int** edges,int v,int sv,bool *visited)
{

queue<int> pendingnodes;

pendingnodes.push(sv);
visited[sv]=true;
while(!pendingnodes.empty())
{
int front=pendingnodes.front();
pendingnodes.pop();
cout<<front<<endl;
for(int i=0;i<v;i++)
{

if(front==i)
continue;

if(edges[front][i])
{
if(visited[i])
continue;

pendingnodes.push(i);
visited[i]=true;

}

}

}
}


void printDFS(int** edges,int v,int sv,bool *visited)
{

cout<<sv<<" ";
visited[sv]=true;
for(int i=0;i<v;i++)
{

if(i==sv)
continue;

if(edges[sv][i]==1)
{

if(visited[i])
continue;

printDFS(edges,v,i,visited);
}

}


}	

void DFS(int** edges,int v)
{


bool *visited =new bool[v];
for(int i=0;i<v;i++)
{

visited[i]=false;

}

for(int i=0;i<v;i++)
{

if(!visited[i])
{
printDFS(edges,v,i,visited);
cout<<endl;
}
}
delete [] visited;
}



void BFS(int** edges,int v)
{


bool *visited =new bool[v];
for(int i=0;i<v;i++)
{

visited[i]=false;

}

for(int i=0;i<v;i++)
{
if(!visited[i])
printBFS(edges,v,i,visited);
}
delete [] visited;
}








int main()
{

int n,e;
cin>>n>>e;

int** edges=new int*[n];

for(int i=0;i<n;i++)

{
edges[i]=new int[n];

for(int j=0;j<n;j++)
{

edges[i][j]=0;

}
}

for(int i=0;i<e;i++)
{

int f,s;
cin>>f>>s;

edges[f][s]=1;
edges[s][f]=1;
}



cout<<"DFS "<<endl;
DFS(edges,n);

cout<<"BFS "<<endl;
BFS(edges,n);

for(int i=0;i<n;i++)
{
 delete [] edges[i];
}

delete [] edges;
}
