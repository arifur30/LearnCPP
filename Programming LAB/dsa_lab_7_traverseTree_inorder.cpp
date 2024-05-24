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

    Node* insert(Node* root, int val) {
        if (root == nullptr) {
            return new Node(val);
        }

        if (val < root->data) {
            root->left = insert(root->left, val);
        } else if (val > root->data) {
            root->right = insert(root->right, val);
        }

        return root;
    }
};

void inorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }

    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
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

    cout << "\n\nInorder traversal of the binary tree is: ";
    inorderTraversal(root);

    return 0;
}