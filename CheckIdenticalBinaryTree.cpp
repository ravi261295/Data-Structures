                                        // --- Identical Binary Tree --- //
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
// Function to check two binary trees are identical or not.
bool checkIdentical(struct Node* x, struct Node* y ){
    if (x == NULL && y == NULL)
        return true;

    // if both trees are non-empty and value of their root node matches,
    // recur for their left and right sub-tree
    if((x && y) && (x->data == y->data) && checkIdentical(x->left, y->left) && checkIdentical(x->right, y->right)){
        return true;
    }
    else{
        return false;
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

    struct Node *root2 = createNode(1);
    root2->left = createNode(2);
    root2->right = createNode(3);
    root2->left->left = createNode(7);
    root2->left->right = createNode(5);
    root2->right->left = createNode(-1);
    root2->right->right = createNode(78);
    cout<<checkIdentical(root, root2)<<endl;
    return 0;
}
