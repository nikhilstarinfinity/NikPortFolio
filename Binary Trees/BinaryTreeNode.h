template<typename T>

class BinaryTreeNode
{
public:
T data;
BinaryTreeNode* left;
BinaryTreeNode* right;

 BinaryTreeNode(T data)
 {
 
 this->data = data;
 left = NULL;
 right = NULL;
 
 }
 
 ~BinaryTreeNode()
 {
 delete left;
 delete right; // effectively delete NULL call ho rha he jisse koi dikkat nhi h , ye kuch nhi krta h ignore kr deta h.. NULL ko kya hi delete karega..hahahhahah...
 
 
 }
 

};
