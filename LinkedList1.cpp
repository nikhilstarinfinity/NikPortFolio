#include<iostream>
using namespace std;
#include "Node.cpp"



Node* takeInput()
{

int data;
cin>>data;

Node * head=NULL;

char per='y';

//cout<<"Do you want to add more nodes?"<<endl;
//cin>>per;
while(per=='y')
{

Node* newnode= new Node(data);

if(head==NULL)
{
head=newnode;
}
else
{
Node* temp=head;

while(temp->next!=NULL)
{

temp=temp->next;
}

temp->next=newnode;
}
cout<<"Do you want to add more nodes?"<<endl;
cin>>per;
if(per=='y'){
cout<<"add data to added node"<<endl;

cin>>data;
}
}
return head;
}














void print(Node * head)
{


//Node* temp=head;


/*
while(temp!=NULL)
{
cout<<temp->data<<" ";

temp=temp->next;
}
cout<<endl;
*/
while(head!=NULL)
{
cout<<head->data<<" ";

head=head->next;
}
cout<<endl;
}
int main()
{

Node* head=takeInput();

print(head);

//Node* tail=&n2;
/*Node n1(1);

Node* head=&n1;
	
Node n2(2);
n1.next=&n2;

Node n3(3);
n2.next=&n3;

Node n4(4);
n3.next=&n4;

Node n5(5);
n4.next=&n5;
print(head);
print(head);
/*
n1.next=&n2;

cout<<head->data<<" "<<head->next->data<<endl;

//cout<<" n1= "n1.data<<" n2= "<<n2.data;

//Dynamically

Node* n3=new Node(3);
n2.next= n3;
Node* n4=new Node(4);
n3->next=n4;
cout<<head->next->next->data<<" "<<head->next->next->next->data<<endl;
*/





}


