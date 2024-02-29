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

Node* insert(Node* node, int data) {
    if (node == nullptr) {
        return new Node(data);
    }

    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }

    return node;
}

void inorderTraversal(Node* node) {
    if (node != nullptr) {
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
}

int main() {
    Node* root = nullptr;
    vector<int> values = {38, 14, 56, 8, 23, 45, 82, 18, 70, 20};

    for (int value : values) {
        root = insert(root, value);
    }

    cout << "\n\nInorder traversal of the BST is: ";
    inorderTraversal(root);

    return 0;
}