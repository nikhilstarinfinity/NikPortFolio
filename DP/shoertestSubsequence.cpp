#include<bits/stdc++.h>
using namespace std;
int solve(string s, string v) {
  
  
  if(s.size()==0)
  return 5000;
  
  if(v.size()<=0)
  return 1;
  
  
  
  
  
  
  
  int ans=solve(s.substr(1),v);
  
  int i=0;
  while(v[i]!=s[0] and i<=v.size()-1)
  {
  i++;
  }
  if(i==v.size())
  return  1;
 
 
  int ans2;
  
   ans2=1+solve(s.substr(1),v.substr(i+1));
  
  
  int tot=min(ans,ans2);
  return tot;
    // Write your code here
}

int main() {
    string s, v;
    cin >> s >> v;
    cout << solve(s, v);
}
