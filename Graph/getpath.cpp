#include<bits/stdc++.h>
using namespace std;
/*
vector<int>* getpathBFS(int **edges,int v,int sv,int ev,bool *visited)
{



}
*/
vector<int>* getpathDFS(int **edges,int v,int sv,int ev,bool *visited)
{
/*
if(edges[sv][ev])
{

vector<int>* ans=new vector<int>();
ans->push_back(ev);
ans->push_back(sv);
return ans;
}
*/
if(sv==ev)
{
vector<int>* ans=new vector<int>();
ans->push_back(ev);
return ans;
}
vector<int>* ans=new vector<int>();

visited[sv]=true;

for(int i=0;i<v;i++)
{

if(sv==i)
continue;

if(edges[sv][i] and !visited[i])
{

ans=getpathDFS(edges,v,i,ev,visited);
/*{
if(ans==NULL)   yeh yha pr galti kr di.. hme NULL milte hi return krna shuru nhi kr dena hai..aage ka loop run hone do ...ho skta hai kisi or neighbour se path exist krta ho..
return ans; 
6 6
0 1
0 3
1 2
2 3
3 5
3 4
0 5
isme ans 5 3 2 1 0 hona chiye but isse (galt vale code) se NULL aayega..
}*/
if(ans!=NULL)
{

ans->push_back(sv);
return ans;
}
}


}
ans=NULL;

return ans;
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
    
    
    vector<int>* v= getpathDFS(edges,n,v1,v2,visited);
    delete [] visited;
      if(v!=NULL)
      {for(int i=0;i<v->size();i++)
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
