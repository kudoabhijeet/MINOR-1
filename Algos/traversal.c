#include<stdio.h> 
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
void inorder(struct Node *root) {
if (root == NULL)
return;
inorder(root->left);
process(root->val);
inorder(root->right);
}

void preorder(struct Node *root) {
if (root == NULL)
return;
process (root->val);
preorder(root->left);
preorder(root->right);
}

void postorder(struct Node *root) {
if (root == NULL)
return;
postorder(root->left);
postorder(root->right);
process(root->val);
}
