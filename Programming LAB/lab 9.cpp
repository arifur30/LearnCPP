#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
   
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
        return root;
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

int getHeight(Node* root) {
    if (root == nullptr) {
        return -1;
    }
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}
int getNodeDepth(Node* root, int data) {
    if (root == nullptr) {
        return -1; 
    }
    if (data == root->data) {
        return 0; 
    }
    if (data < root->data) {      
        int leftDepth = getNodeDepth(root->left, data);
        if (leftDepth != -1) {
            return leftDepth + 1;
        }
    } else {
        int rightDepth = getNodeDepth(root->right, data);
        if (rightDepth != -1) { 
            return rightDepth + 1;
        }
    }
    return -1; 
}
int main() {
    Node* root = nullptr;
    root = insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 12);
    insertNode(root, 18);

    int height = getHeight(root);
    cout << "Height of the binary tree is: " << height << endl;
   int   nn  ;
   cout<<" Enter a node to find depth of the node: "; 
   cin>>nn; 
    int depth = getNodeDepth(root, nn); 
    if (depth == -1) {
        cout << "Node not found in the tree." << endl;
    } else {
        cout << "Depth of the node is: " << depth << endl;
    } 
    return 0;
}
