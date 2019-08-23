                                          // --- Binary Tree Left View --- //
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
void leftView(struct Node *root, int level, int* max_so_far){
    if(root == NULL){
        return;
    }
    if (*max_so_far < level) {
        cout << root->data << " ";
        *max_so_far = level;
    }
    leftView(root->left, level + 1, max_so_far);
    leftView(root->right, level + 1, max_so_far);
}
void TreeLeftView(struct Node *root){
    int max_so_far = 0;
    leftView(root, 1, &max_so_far);
}
int main(){
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(5);
    root->left->right->left = createNode(56);
    root->left->right->left = createNode(56);
    root->right->left = createNode(-1);
    root->right->right = createNode(78);

    cout<<"Tree left view : ";
    TreeLeftView(root);
    return 0;
}

