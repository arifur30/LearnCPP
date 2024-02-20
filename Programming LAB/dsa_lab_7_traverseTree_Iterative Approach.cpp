#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void iterativePreorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    stack<Node*> nodeStack;
    nodeStack.push(root);

    while (!nodeStack.empty()) {
        Node* node = nodeStack.top();
        cout << node->data << " ";
        nodeStack.pop();

        if (node->right) {
            nodeStack.push(node->right);
        }
        if (node->left) {
            nodeStack.push(node->left);
        }
    }
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(60);
    root->left->right = new Node(70);
    root->left->right->left = new Node(62);

    root->right->left = new Node(90);
    root->right->right = new Node(75);
    root->right->left->right = new Node(80);

    cout << "\n\nIterative preorder traversal of the binary tree is: ";
    iterativePreorder(root);
    cout<<endl<<endl;
    return 0;
}