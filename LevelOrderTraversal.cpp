                                        // --- Binary Tree LevelOrderTraversal(BFS) --- //
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

void levelOrderTraversal(struct Node *root){
    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node* curr = q.front();
        cout<<curr->data<<" ";
        if(curr->left != NULL) 
          q.push(curr->left);
        if(curr->right != NULL) 
          q.push(curr->right);
        q.pop();
    }
}
int main(){
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(5);
    root->right->left = createNode(-1);
    root->right->right = createNode(78);
    
    cout<<"Level Order Traversal: ";
    levelOrderTraversal(root);
    cout<<endl;
    return 0;
}
