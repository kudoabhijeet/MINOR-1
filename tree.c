#include<stdio.h>
#include<stdlib.h> 

// 
struct node {
    int keyData;
    struct node *left;
    struct node *right;
};

// Add a new Data Point
struct node *newDP(int keyData) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->keyData = keyData;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

// Driver
int main() {
    struct node *root = NULL;
    int sample = 21;
    root = newDP(sample);
}