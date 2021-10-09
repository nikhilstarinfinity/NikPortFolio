#include <iostream>
using namespace std;
#include "Node.cpp"




Node* reviter(Node* head)
{
if(head==NULL||head->next==NULL)
{
return head;
}

Node* prev=NULL;
Node* curr=head;
Node* next1=head->next;


while(curr!=NULL)
{
curr->next=prev;
prev=curr;
curr=next1;
if(next1!=NULL){
next1=next1->next;
}
}

return prev;
}

















class pai
{
public:
Node* head;
Node* tail;

};



pai reverseLinkedList(Node* head)
{

if(head==NULL||head->next==NULL)
{
pai ans;
ans.head=head;
ans.tail=head;
return ans;
}

pai smallans=reverseLinkedList(head->next);
smallans.tail->next=head;
head->next=NULL;

pai ans;


ans.head=smallans.head;
ans.tail=head;

return ans;
}


Node* reverseLL_better(Node* head)
{

return reverseLinkedList(head).head;
}













int length(Node *head) {
   
    Node* temp=head;   
    int len=0;
    
    while(temp!=NULL)
    {
        
        temp=temp->next;
        len++;
        
        
    }
    
    return len;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
cout<<endl;
}




Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
if(head1!=NULL&&head2!=NULL)
{
Node* fh;
Node* ft;
if(head1->data<=head2->data)
{
//cout<<"head1 "<<endl;
fh=head1;
ft=head1;
head1=head1->next;
}
else
{
//cout<<"head2 "<<endl;
fh=head2;
ft=head2;
head2=head2->next;
}


while(head1!=NULL&&head2!=NULL)
{

if(head1->data<=head2->data)
{
//cout<<"isme ft = head1"<<endl;
ft->next=head1;
ft=head1;
head1=head1->next;
//cout<<head1<<endl;
}
else
{//cout<<"ft head2 "<<endl;


ft->next=head2;
ft=head2;
head2=head2->next;
}
}

if(head1!=NULL)
{
//cout<<"head2 null"<<endl;
//cout<<ft->data<<endl;
//cout<<head1->data<<endl;
ft->next=head1;
}
else
{
//cout<<"head1 null"<<endl;
ft->next=head2;
}

return fh;
}
 
 if(head1==NULL)
{

return head2;

}
else
{
return head1;

}
}

Node *mergeSort(Node *head)
{
 
 if(head==NULL||head->next==NULL)
 {
 
 return head;
 
 }
 
 
 
 
    
    int len=length(head);
    
    int mid=(len+1)/2;
   // cout<<mid<<endl;
    int i=1;
    Node* h1=head;
    Node* temp1=h1;
    
     while(i<mid)
    {
   // cout<<"  	2nd "<<endl;
    
    temp1=temp1->next;
    i++;
    }
    //cout<<temp1->data<<endl;
   Node* h2=temp1->next;
   temp1->next=NULL;
   
   Node* h1sorted=mergeSort(h1);
   
   Node* h2sorted=mergeSort(h2);
   
   Node* headsorted=mergeTwoSortedLinkedLists(h1sorted, h2sorted);

return headsorted;
}


Node *midPoint(Node *head)
{

int len=length(head);

int i=1;

int mid=(len+1)/2;
Node* temp=head;
while(i<mid)
{
temp=temp->next;
i++;
}

return temp;
}

Node* printReverse(Node *head)
{

if(head==NULL||head->next==NULL)
{

return head;
}

Node* headrev=printReverse(head->next);
Node* temp=headrev;
while(temp->next!=NULL)
{
temp=temp->next;
}

temp->next=head;
head->next=NULL;

return headrev;
}


bool isPalindrome(Node *head)
{
    
    
    if(head==NULL)
    {
    return true;
    }
    
    
    
    
    
    int len=length(head);
    
    int mid=(len+1)/2;
   // cout<<mid<<endl;
    int i=1;
    Node* h1=head;
    Node* temp1=h1;
    
    
    if(len==1)
    {
    
    return true;
    }
    
   /* 
    if(len==2)
    {
    if(h1->data==h1->next->data)
    {
    return true;
    }
   
   else
   {
   return false;
   }
   }
   */
    //cout<<" 2nd "<<endl;
    
    while(i<mid)
    {
    //cout<<"  	2nd "<<endl;
    
    temp1=temp1->next;
    i++;
    }
   // cout<<"1st "<<endl;
    Node* h2=temp1->next;
    
    temp1->next=NULL;
    
    Node* h2rev=printReverse(h2);
    print(h2rev);
    Node* temp2=h2rev;
    Node* temp1new=h1;
    //cout<<temp1new->data<<" "<<h2rev->data<<endl;
   if(h1->data==h2rev->data)
   {
cout<<"andar ghuse"<<endl;
    while(temp2!=NULL)
    {
    
    if(temp1new->data==temp2->data)
    {
    cout<<temp1new->data<<" "<<temp2->data<<endl;
    temp1new=temp1new->next;
    temp2=temp2->next;
    
    }
   
   else
   {
   return false;
   }
  
   }
   
    return true;
  
  }
  else {
  
  return false;
  }
  
   
    }
    
    
    
    
    
    
    
Node *removeDuplicates(Node *head)
{

if(head==NULL||head->next==NULL)
{
return head;
}



Node* t1=head;
Node* t2=t1->next;

while(t2!=NULL)
{
if(t1->data!=t2->data)
{
t1->next=t2;
Node* t4=t2;
t2=t2->next;
t1=t4;
}
else
{

Node* t3=t2;
t2=t2->next;
t1->next=t2;
delete t3;
}


}

return head;

}
Node *appendLastNToFirst(Node *head, int n)

{

if(n==0)
{
return head;
}





int len=length(head);
if(n<=len)
{
int count=len-n;
Node* curr=head;
int i=1;
while(i<count)
{
curr=curr->next;
i++;
}

Node* h2=curr->next;

curr->next=NULL;

Node* temp=h2;
while(temp->next!=NULL)
{
temp=temp->next;
}

temp->next=head;

return h2;
}
else

{
return NULL;
}

}

 







int findNode(Node *head, int n)
{
   int count=0;
    
    Node* curr=head;
    
    while(curr!=NULL&&curr->data!=n)
    {
        curr=curr->next;
        count++;
        
    }
    
    if(curr==NULL)
    {
    return -1;
    }
    else
    {
    return count;
    }
}

Node* deleteNodeRecursively(Node* head,int index)
{

if(head==NULL)
{
return head;
}

if(index==0)
{

Node* c=head;
head=c->next;


delete c;
return head;

}

Node* a=deleteNodeRecursively(head->next,index-1);

head->next=a;

return head;
}


Node* deleteNode(Node* head,int index)
{
int count=0;
Node* temp=head;

if(index==0)
{

Node* c=head;

head=c->next;
delete c;
return head;
}




while(temp!=NULL&&count<index-1)
{
temp=temp->next;
count++;
}

Node* a=temp->next;
//Node* b=a->next;
temp->next=a->next;

delete a;
return head;
}



Node* insertNodeRecursively(Node* head,int index,int data)
{
Node* newnode=new Node(data);

if(head==NULL)
{
return head;
}

if(index==0)
{
newnode->next=head;
head=newnode;
}

Node* a=insertNodeRecursively(head->next,index-1,data);

head->next=a;
return head;
}



Node* insertNode(Node* head,int index,int data)
{
Node* newnode=new Node(data);


int count=0;

Node* temp=head;

if(index==0)
{
newnode->next=head;
head=newnode;
return head;//agar me yha head return na kroo toh errror nhi ayega.. hamari 0th index replace ho jayegi inserted data se..
}


while(temp!=NULL&&count<index-1)
{
temp=temp->next;
count++;
}

newnode->next=temp->next;
temp->next=newnode;

return head;
}

Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	
	
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
		}
		else {
			Node *temp = head;
			while(temp -> next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
		}

		cin >> data;
	}
	
	
	return head;
}

//cout<<head->data<<" ";


int main() {

	Node *head = takeInput();
	head=reviter(head);
	//head=reverseLL_better(head);
	print(head);
	
	//Node* sortedhead=mergeSort(head);
	//print(sortedhead);
	
	/*Node* head1=takeInput();
	print(head1);
	Node* head2=takeInput();
	print(head2);
	*///Node* fh=mergeTwoSortedLinkedLists(head1,head2);
	//print(fh);
	
	
//head=printReverse(head);
	//head=removeDuplicates(head);
	//print(head);
	
	/*
	if(isPalindrome(head))
	{
	cout<<" Palindrome"<<endl;
	}
	else
	{
	cout<<" not Palindrome"<<endl;
	}
	
	*/
	//print(head);
	//int i,data;
	//cin>>i>>data;
	
	//head=insertNodeRecursively(head,i,data);
	//print(head);
	//int idelete;
	//cin>>idelete;
	//head=deleteNodeRecursively(head,idelete);
	
	//cout<<length(head)<<endl;
	//int n;
	//cin>>n;
	//head=appendLastNToFirst(head,n);
	//cout<<findNode(head,n)<<endl;
	//print(head);
	

	/*
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head);

ee	print(head);
	*/
	/*
	// Dynamically
	Node *n3 = new Node(10);
	Node *head = n3;
	
	Node *n4 = new Node(20);
	n3 -> next = n4;

	*/

}

