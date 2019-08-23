                                        // --- Binary Tree Creation and Traversals(In, Pre, Post)--- //
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
void preOrder(struct Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node *root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(struct Node *root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(5);
    root->right->left = createNode(-1);
    root->right->right = createNode(78);
    cout<<"PreOrder Traversal of tree is: ";
    preOrder(root);cout<<endl;cout<<endl;
    cout<<"InOrder Traversal of tree is: ";
    inOrder(root);cout<<endl;cout<<endl;
    cout<<"PostOrder Traversal of tree is: ";
    postOrder(root);cout<<endl;cout<<endl;
    return 0;
}
