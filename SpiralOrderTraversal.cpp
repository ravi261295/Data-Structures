                                               // --- Spiral order Traversal of Binary Tree --- //
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
void spiralTraversal(struct Node* root){
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty()){
        int size1 = st1.size();
        while(size1--){
            Node* top1 = st1.top();
            cout<<top1->data<<" ";
            if(top1->left != NULL){
                st2.push(top1->left);
            }
            if(top1->right != NULL){
                st2.push(top1->right);
            }
            st1.pop();
        }
        int size2 = st2.size();
        while(size2--){
            Node* top2 = st2.top();
            cout<<top2->data<<" ";
            if(top2->right != NULL){
                st1.push(top2->right);
            }
            if(top2->left != NULL){
                st1.push(top2->left);
            }
            st2.pop();
        }
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
    spiralTraversal(root);
    return 0;
}
