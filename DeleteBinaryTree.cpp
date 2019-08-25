                                        // --- Delete Binary Tree --- //
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
void deleteTree(struct Node* &root){
    if(root == NULL){
        return;
    }
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
    root = NULL;
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
    deleteTree(root);
    if(root==NULL)
        cout<<"Tree is deleted successfully"<<endl;
    return 0;
}
