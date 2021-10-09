#include<bits/stdc++.h>
using namespace std;

  
/*2 11
VXDXNXNXNXA
XOCIXGXIXJX
*/


bool hasPath1(vector<vector<char>> &board,int n,int m,unordered_map<char,bool> visited,int i,int j1,string str)
{
cout<<visited[board[i][j1]]<<endl;
visited[board[i][j1]]=true;

if(i>=1 and j1>=1)
{
if(board[i-1][j1-1]==str[1] and !visited[board[i-1][j1-1]])
{
return hasPath1(board,n,m,visited,i-1,j1-1,str.substr(1));
}

}

if(i>=1)
{
if(board[i-1][j1]==str[1] and !visited[board[i-1][j1]])
{
return hasPath1(board,n,m,visited,i-1,j1,str.substr(1));
}
}
if(j1>=1)
{
if(board[i][j1-1]==str[1] and !visited[board[i][j1-1]])
{
return hasPath1(board,n,m,visited,i,j1-1,str.substr(1));
}
}
if(i>=1 and j1<m-1)
{
if(board[i-1][j1+1]==str[1] and !visited[board[i-1][j1+1]])
{
return hasPath1(board,n,m,visited,i-1,j1+1,str.substr(1));
}
}


if(j1<m)
{
if(board[i][j1]==str[1] and !visited[board[i][j1]])
{
return hasPath1(board,n,m,visited,i,j1,str.substr(1));
}
}

if(j1<m-1)
{
if(board[i][j1+1]==str[1] and !visited[board[i][j1+1]])
{
return hasPath1(board,n,m,visited,i,j1+1,str.substr(1));
}
}

if(i<n-1 and j1<m-1)
{
if(board[i+1][j1+1]==str[1] and !visited[board[i+1][j1+1]])
{
return hasPath1(board,n,m,visited,i+1,j1+1,str.substr(1));
}
}

if(i<n-1)
{
if(board[i+1][j1]==str[1] and !visited[board[i+1][j1]])
{
return hasPath1(board,n,m,visited,i+1,j1,str.substr(1));
}
}
return false;
}




bool hasPath(vector<vector<char>> &board, int n, int m) {
bool ans;
string str="CODINGNINJA";
unordered_map<char,bool> visited;

for(int l=0;l<11;l++)
{
visited[str[l]]=false;
}

do{
int k=0;
int i=0;
int j1=0;
for(;i<n;i++)
{
int j=0;
for(;j<m;j++)
{
if(board[i][j]==str[0] and !visited[board[i][j]])
{
j1=j;
break;
}

}

if(board[i][j1]==str[0] and !visited[board[i][j]])
{
break;
}
}

int i1=i;

if(i==n)
{
break;
}

cout<<board[i][j1]<<endl;  //C mil gya..

cout<<"yha"<<endl;
ans=hasPath1(board,n,m,visited,i1,j1,str);
if(ans)
return true;
}
while(!ans);


return false;

}

















//return hasPath(board,


/*
while(k!=str.size() and i<n and j<m)
{
if(board[i][j]=='C')
{

if(board[i+1][j]=str[k+1]) {
i=i+1;
k++;
}
if(board[i][j+1]==str[k+1])
{
j=j+1;
k++;
}
if(board[i+1][j+1]==str[k+1])
{
i+=1;
j+=1;
k++;
}

}

}

if(k==str.size())
return true;
else
false;
}
*/



 
 
 
 
 
 
 
    // Write your code here.


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    cout << (hasPath(board, n, m) ? 1 : 0);
}
