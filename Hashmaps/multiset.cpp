#include<bits/stdc++.h>
using namespace std;

int main()
{
multimap<int,int> m;

//same vhi multiple map keys store kr skta hai ..sorted way me.. 1,2,3,4,5,5,5,7,7,77,77


multiset<int> mst;
mst.emplace(2);
mst.insert(2);

mst.insert(1);
mst.insert(1);
mst.insert(1);

mst.clear(); //sara clear kr dega mtlb uda dega...khali kar dega pura set
// mst esa bna {1,1,1,2,2} and yaa sorted order me hote hai

for(auto it:mst)
{
	cout<<it<<" ";
	}

mst.find(2); //iterator lake dega jo 1st occurance of 2 ko point kr rha hoga


return 0;
}
