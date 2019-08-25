                                        // --- Height of Binary Tree --- //
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int val){
    struct Node *newNode = new Node();
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};
int heightOfBinaryTree(struct Node* root){
    if(root == NULL)
        return 0;
    return 1 + max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right));
}
int main(){
    struct Node *root = NULL;
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(5);
    root->right->left = createNode(-1);
    root->right->right = createNode(78);
    cout<<"Height of Binary Tree: "<<heightOfBinaryTree(root)<<endl;
    return 0;
}

