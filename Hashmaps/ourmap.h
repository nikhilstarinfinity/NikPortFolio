#include<string>
template<typename V>

class mapNode
{

public:
string key;
V value;
mapNode* next;

 mapNode(string key,V value)
 {
 this->key=key;
 this->value=value;
 next=NULL;
 }
 
 ~mapNode()
 {
 delete next;
 }
 
};

template<typename V>
class ourmap
{
public:
mapNode<V>** buckets;
int count;
int numBuckets;

 ourmap()
 {
 numBuckets=5;
 count=0;
 buckets=new mapNode<V>*[numBuckets];
 for(int i=0;i<numBuckets;i++)
 {
 buckets[i]=NULL;
 }
 }
 ~ourmap()
 {
 for(int i=0;i<numBuckets;i++)
 {
  delete buckets[i];
 }
 delete [] buckets;
 }


int size()
{
return count;
}

private:
int getBucketIdx(string key)
{
int hashcode=0;
int currcoeff=1;
for(int i=key.length()-1;i>=0;i--)
{
hashcode+=key[i]*currcoeff;
hashcode=hashcode%numBuckets;
currcoeff*=37;
currcoeff=currcoeff%numBuckets;
}
return hashcode%numBuckets;
}

public:
void insert(string key,V value)
{
//cout<<count<<endl;
int bucketIdx=getBucketIdx(key);

mapNode<V>* head=buckets[bucketIdx];
while(head!=NULL)
{

if(head->key==key)
{
head->value=value;
}
head=head->next;
}
head=buckets[bucketIdx];
mapNode<V>* node=new mapNode<V>(key,value);
node->next=head;
buckets[bucketIdx]=node;
//head=node; very big mistake.. thi yee...yaad rakhunga esa na karu kbi bhi..tujhe yad rakhunga...hehhehehee..
count++;

double loadfactor=(1.0*count)/numBuckets;
if(loadfactor>0.7)
{

rehash();

}
cout<<numBuckets<<endl;
}

V remove(string key)
{
int bucketIdx=getBucketIdx(key);
mapNode<V>* head=buckets[bucketIdx];
mapNode<V>* prev=NULL;

while(head!=NULL)
{
if(head->key==key)
{

if(prev==NULL)
{
buckets[bucketIdx]=head->next;
}
else
{
prev->next=head->next;
}

V value=head->value;
delete head;
count--;
return value;
}
prev=head;
head=head->next;
}

return 0;

}

V getValue(string key)
{
int bucketIdx=getBucketIdx(key);
mapNode<V>* head=buckets[bucketIdx];

while(head!=NULL)
{
if(head->key==key)
{
return head->value;
}
head=head->next;
}
return 0;
}

void rehash()
{
//cout<<"rehash"<<endl;

mapNode<V>** temp=buckets;
buckets=new mapNode<V>*[2*numBuckets];
for(int i=0;i<2*numBuckets;i++)
{
buckets[i]=NULL;
}

int oldnumBuckets=numBuckets;
numBuckets*=2;
count=0;
//cout<<"yha b"<<endl;
for(int i=0;i<oldnumBuckets;i++)
{
//cout<<temp[i]<<endl;
mapNode<V>* head=temp[i];

//cout<<"yha b"<<endl;
while(head!=NULL)
{
string key=head->key;

V value=head->value;
insert(key,value);
head=head->next;
//cout<<"chala"<<endl;
}
}
for(int i=0;i<oldnumBuckets;i++)
{
mapNode<V>* head=temp[i];
delete head;

}
delete [] temp;
}







};













