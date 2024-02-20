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

void postorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " ";
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

    cout << "Postorder traversal of the binary tree is: ";
    postorderTraversal(root);

    return 0;
}