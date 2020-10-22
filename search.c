#include<stdlib.h> 
struct Node
{
  TYPE val;
  struct Node *left;          // Left child 
 struct Node *right;       // Right child 
};
struct Node*root;  //storing the root node address
root=NULL; //set tree empty
//function to create node dynamically
struct Node* addNewNode(TYPE  val){
struct Node* newNode=(struct Node*)malloc(sizeof(Node));
newNode->val=val;
newNode->left=NULL;
newNode->left=NULL;
return newNode;
}
// function to insert node
void insert(struct Node*root,TYPE val){
if(root==NULL){
root=addNewNode(val);
}
else if(val<=root->val)
{
root->left=insert(root->left,val);
}
else 
{
root->right=insert(root->right,data);
}
return root;
}
bool search(struct Node*root,TYPE val){
if(rootptr==NULL)return False;
else if(root->val==val)return True;
else if(val<=root>val)
return search(root->left,val);
else
return search(root->right,val);
}
