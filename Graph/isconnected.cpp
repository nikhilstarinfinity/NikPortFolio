#include <iostream>
using namespace std;

vector<int>* isconnected(int **edges,int v,int sv,bool * visited)
{
visited[sv]=true;
vector<int>* ans;
ans.push_back(sv);
    for(int i=0;i<v;i++)
    {
        if(i==sv)
            continue;
        
        if(edges[sv][i] and !visited[i])
        {
          
           isconnected(edges,v,i,visited);
            
        }
    }
    

}
bool isconnected(int **edges,int v,int sv)
{
    bool *visited=new bool[v];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    
    
     isconnected(edges,v,sv,visited);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            return false;

        }
            }
    return true;
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

    
    if(isconnected(edges,n,0))
       
    cout<<"true";    
    else
        
        cout<<"false";
        // Write your code here
}
