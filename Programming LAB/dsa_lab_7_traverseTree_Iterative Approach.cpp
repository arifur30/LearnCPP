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

void inorderTraversal(Node* node)
{
    // iterative inorder traversal
    stack<Node*> s;
    Node* curr = node;

    while (curr != nullptr || !s.empty()) {
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}


Node* findMin(Node* root) {
    Node* current = root;

    // loop down to find the leftmost leaf
    while (current && current->left != nullptr && current->right != nullptr) {
        current = current->left;
    }

    return current;
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    Node* temp = findMin(root);
    cout << temp->data;
    cout<<endl<<endl;
    return 0;
}

