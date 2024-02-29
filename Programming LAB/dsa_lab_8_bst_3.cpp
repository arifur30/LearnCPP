#include <iostream>
#include <vector>
#include <new>
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

Node* minValueNode(Node* node) {
    Node* current = node;

    while (current && current->left != nullptr) {
        current = current->left;
    }

    return current;
}

Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorderTraversal(Node* node) {
    if (node != nullptr) {
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
}

bool search(Node* node, int value) {
    if (node == nullptr) {
        return false;
    } else if (node->data == value) {
        return true;
    } else if (node->data > value) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}


int main() {
    Node* root = nullptr;
    vector<int> values = {38, 14, 56, 8, 23, 45, 82, 18, 70, 20};

    for (int value : values) {
        root = insert(root, value);
    }
        cout << "Inorder traversal of the BST is: ";
        inorderTraversal(root);
        cout << "\n";
    
        int valueToFind = 20;
        if (search(root, valueToFind)) 
            cout << "\nValue " << valueToFind << " is present in the BST.\n\n";
        else 
        cout << "\nValue " << valueToFind << " is not present in the BST.\n\n";

        int valueToDelete;
        cout << "Enter a value to delete: ";
        cin >> valueToDelete;

        root = deleteNode(root, valueToDelete);

        cout << "Inorder traversal of the BST after deletion is: ";
        inorderTraversal(root);
        cout<<endl;


    return 0;
}