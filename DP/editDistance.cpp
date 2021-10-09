#include<bits/stdc++.h>
using namespace std;


int editDistance_DP(string s1, string s2) {
int m=s1.size();
int n=s2.size();


int ** output=new int*[m+1];
for(int i=0;i<=m;i++)
{

output[i]=new int[n+1];

}

for(int j=0;j<=n;j++)
{
cout<<"row fill"<<endl;
output[0][j]=j;
cout<<"ro filed"<<endl;

}
cout<<"ro filed"<<endl;
for(int i=0;i<=m;i++)
{
cout<<"col fill"<<endl;
cout<<i<<endl;
output[i][0]=i;
cout<<i<<endl;
}




for(int i=1;i<=m;i++)
{

for(int j=1;j<=n;j++)
{


if(s1[m-i]==s2[n-j])
{
cout<<"not eql"<<endl;
output[i][j]=output[i-1][j-1];
cout<<output[i][j]<<endl;
}
else
{

cout<<" eql"<<endl;
output[i][j]=min(output[i][j-1]+1,min(output[i-1][j]+1,output[i-1][j-1]+1));

cout<<output[i][j]<<endl;
}

}

}

return output[m][n];
}


int editDistance_memo(string s1, string s2,int ** output) {

int m=s1.size();
int n=s2.size();



if(s1.size()==0 || s2.size()==0)
{
return max(s1.size(),s2.size());
}



if(output[m][n]!=-1)
{
return output[m][n];

}

//ab ans nikalenge and output arr me save kr denge for future use..

if(s1[0]==s2[0])
{
output[m][n] = editDistance_memo(s1.substr(1),s2.substr(1),output);
return output[m][n];
}


else
{

//insert vala ans

int a = editDistance_memo(s1.substr(1),s2,output) +1;
int b = editDistance_memo(s1,s2.substr(1),output) + 1;
int c = editDistance_memo(s1.substr(1),s2.substr(1),output) +1;

int ans=min(a,min(b,c));
output[m][n]=ans;

for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{

cout<<output[i][j]<<" ";
}
cout<<endl;
}

return ans;
}

}
int editDistance_memo(string s1, string s2) {


int m=s1.size();
int n=s2.size();

int** output=new int*[m+1];
for(int i=0;i<=m;i++)
{
output[i]=new int[n+1];

for(int j=0;j<=n;j++)
{

output[i][j]=-1;
}

}

return editDistance_memo(s1,s2,output);
}
int editDistance(string s1, string s2) {
/*
if(s1.size()==0 || s2.size()==0)
{
return max(s1.size(),s2.size());
}

if(s1[0]==s2[0])
{

return editDistance(s1.substr(1),s2.substr(1));


}

else
{

//insert vala ans

int a = editDistance(s1.substr(1),s2.substr(1)) +1;
int b = editDistance(s1,s2.substr(1)) + 1;
int c = editDistance(s1.substr(1),s2.substr(1)) +1;

return min(a,min(b,c));

}

*/

if(s1.size()==0)
{
    return s2.size();
}
    if(s2.size()==0)
    {
        return s1.size();
        
    }
if(s1[0]==s2[0])
{

return editDistance(s1.substr(1),s2.substr(1));


}

else
{

//insert vala ans

int a = editDistance(s1.substr(1),s2) +1;
int b = editDistance(s1,s2.substr(1)) + 1;
int c = editDistance(s1.substr(1),s2.substr(1)) +1;

return min(a,min(b,c));

}



	// Write your code here
}

int main() {
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;
    cout << editDistance(s1, s2)<<endl;

    cout << editDistance_memo(s1, s2)<<endl;
   cout << editDistance_DP(s1, s2)<<endl;

}
