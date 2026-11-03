#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;       
    Node* left;     
    Node* right;    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
int inOrderSuccessor(Node *root, Node *p) {
    if (root == NULL || p == NULL)
        return -1;
    Node *suc = NULL; 
    while (root != NULL) {
        if (root->data <= p->data)
            root = root->right;
        else {
            suc = root;       
            root = root->left; 
        }
    }
    if (suc == NULL)
        return -1;

    return suc->data;
}
int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    Node* p = root->left;
    int ans = inOrderSuccessor(root, p);
    if (ans == -1)
        cout << "No successor found";
    else
        cout << ans;
    return 0;
}