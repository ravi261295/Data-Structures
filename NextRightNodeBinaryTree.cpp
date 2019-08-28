                                    // --- Right Node after a key in Binary Tree --- //
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
Node* rightNode(Node* root, int key){
    if(root == NULL)
        return NULL;
    int level = 0;
    queue<Node*> q;
    queue<int> queue_level;  // Queue to hold level of each node in tree.
    q.push(root);
    queue_level.push(level);

    while(q.size()){
        Node* top = q.front();
        level = queue_level.front();
        q.pop();
        queue_level.pop();

        if(top->data == key){
            if(q.size() == NULL || queue_level.front() != level){
                return NULL;
            }
            return q.front();
        }
        if (top->left != NULL)
        {
            q.push(top->left);
            queue_level.push(level+1);
        }
        if (top->right != NULL)
        {
            q.push(top->right);
            queue_level.push(level+1);
        }
    }
    return NULL;
}

void test(Node *root, int k)
{
    Node *nr = rightNode(root, k);
    if (nr != NULL)
      cout << "Next Right of " << k << " is " << nr->data << endl;
    else
      cout << "No next right node found for " << k << endl;
}
int main(){
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(7);
    root->left->right = createNode(5);
    root->right->left = createNode(-1);
    root->right->right = createNode(78);
    test(root, 78);
    test(root, 3);
    test(root, 1);
    test(root, 2);
    return 0;
}


