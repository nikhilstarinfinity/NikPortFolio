#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool haspath(int **edges,int n,int v1,int v2,bool* visited)
{

if(edges[v1][v2])
    return true;

    visited[v1]=true;
   /* if(visited[v2])
    return true;
    */
    for(int i=0;i<n;i++)
    {
        
        if(i==v1)
        continue;
        
        if(edges[v1][i] && !visited[i])
        {
          if (haspath(edges,n,i,v2,visited))
          {
              return true;
          }
        }
            
    }
    return false;
}
    






int main() {
 
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

    int v1,v2;
    cin>>v1>>v2;
 
        bool* visited=new bool[n];
    
    for(int i=0;i<n;i++)
    {
        
        visited[i]=false;
        
    }
       
  cout<<haspath(edges,n,v1,v2,visited)<<endl;  
    
for(int i=0;i<n;i++)
{
 delete [] edges[i];
}

delete [] edges;

    // Write your code here
}
