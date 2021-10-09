#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
using namespace std;



void printTreeLevelWise(BinaryTreeNode<int>* root)

{


if(root==NULL)

{
return;
}



queue<BinaryTreeNode<int>*> pendingNodes;

pendingNodes.push(root);

while(!pendingNodes.empty())
{

BinaryTreeNode<int>* front = pendingNodes.front();
pendingNodes.pop();


cout<<front->data<<":";


if(front->left==NULL)
{
cout<<"L:-1"<<",";
}

if(front->left!=NULL)
{
cout<<"L:"<<front->left->data<<",";

pendingNodes.push(front->left);

}

if(front->right==NULL)
{
cout<<"R:-1";
}
if(front->right!=NULL)
{
cout<<"R:"<<front->right->data;

pendingNodes.push(front->right);

}
cout<<endl;



}

}


void printTree(BinaryTreeNode<int>* root)

{


if(root==NULL)

{
return;
}

cout<<root->data<<":";

if(root->left!=NULL)
{
cout<<"L "<<root->left->data<<" ";
}
if(root->right!=NULL)
{
cout<<"R "<<root->right->data<<" ";
}
cout<<endl;
printTree(root->left);
printTree(root->right);

}




BinaryTreeNode<int>* takeInputLevelWise()
{

int rootData;
cout<<"enter root data "<<endl;

cin>>rootData;

if(rootData==-1)
{
return NULL;
}


queue<BinaryTreeNode<int>*> pendingNodes;

BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

pendingNodes.push(root);

while(!pendingNodes.empty())
{

BinaryTreeNode<int>* front = pendingNodes.front();
pendingNodes.pop();
cout<<"Enter Left child of "<<front->data<<endl;
int leftData;
cin>>leftData;

if(leftData!=-1)
{
BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftData);
front->left = leftChild;
pendingNodes.push(leftChild);
}

cout<<"Enter Right child of "<<front->data<<endl;
int rightData;
cin>>rightData;

if(rightData!=-1)
{
BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightData);
front->right = rightChild;
pendingNodes.push(rightChild);
}
}

return root;

}



int numNodes(BinaryTreeNode<int>* root)
{

if(root==NULL)
{
return 0;
}
return 1+numNodes(root->left)+numNodes(root->right);

}



















BinaryTreeNode<int>* takeInput()
{

int rootData;
cout<<"enter root data "<<endl;

cin>>rootData;

if(rootData==-1)
{
return NULL;
}

BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
BinaryTreeNode<int>* leftChild = takeInput();
BinaryTreeNode<int>* rightChild = takeInput();

root->left = leftChild;
root->right = rightChild;

return root;
} 



//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
 



int main()
{
BinaryTreeNode<int>* root= takeInputLevelWise();

printTreeLevelWise(root);
cout<<"Num : "<<numNodes(root)<<endl;
}

