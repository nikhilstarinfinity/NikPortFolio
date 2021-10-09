#include<bits/stdc++.h>
using namespace std;

vector<int>* getpathBFS(int **edges,int v,int sv,int ev,bool *visited)
{


if(sv==ev)
{
vector<int>* ans=new vector<int>();
ans->push_back(ev);
return ans;
}


queue<int> pendingVertices;
pendingVertices.push(sv);
visited[sv]=true;



unordered_map<int,int> whoput;	 
whoput[sv]=-1;
while(!pendingVertices.empty())
{

int front=pendingVertices.front();
pendingVertices.pop();

for(int i=0;i<v;i++)
{

if(front==i)
continue;

if(edges[front][i] and !visited[i])
{
whoput[i]=front;
//cout<<"i'"<<i<<"whoput[i] :"<<whoput[i]<<endl;

if(i==ev)
{
vector<int>* ans=new vector<int>();
int j=ev;
ans->push_back(ev);
while(whoput[j]!=-1)
{
cout<<"J "<<j<<"whoput[j] :"<<whoput[j]<<endl;
ans->push_back(whoput[j]);
j=whoput[j];
}

return ans;
}



pendingVertices.push(i);

visited[i]=true;

}

}





}

return NULL;

}

int main() {
 
int n,e;
cin>>n>>e;
 if(n<0)
    return 0;
   
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
int v1,v2;
    cin>>v1>>v2;
    if(v1>=INT_MAX or v2>=INT_MAX)
    return 0;
        bool* visited=new bool[n];
    
    for(int i=0;i<n;i++)
    {
        
        visited[i]=false;
        
    }
    
    
    vector<int>* v= getpathBFS(edges,n,v1,v2,visited);
    delete [] visited;
      if(v!=NULL)
      {
      cout<<v->size()<<endl;
      for(int i=0;i<v->size();i++)
    {
    cout<<v->at(i)<<" ";
    }
    delete v;
    }
       
for(int i=0;i<n;i++)
{
 delete [] edges[i];
}

delete [] edges;

 }
