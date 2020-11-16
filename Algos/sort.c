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
//function for inorder traversal
void inorder(struct Node *root,int arr[],int &i) {
if (root == NULL)
return;
{
inorder(root->left,arr,i);
process(root->val=arr[i++]);
inorder(root->right,arr,i);
}
}
//function for  tree sort
void treeSort(int arr[], int n) 
{ 
    struct Node *root = NULL; 
  
    // Construct the BST 
    root = insert(root, arr[0]); 
    for (int i=1; i<n; i++) 
        root = insert(root, arr[i]); 
  
    // Store inoder traversal of the BST 
    // in arr[] 
    int i = 0; 
    inorder(root, arr, i); 
} 

