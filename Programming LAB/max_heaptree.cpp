#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
};

class MaxHeap {
    Node* root;

public:
    MaxHeap() : root(nullptr) {}

    Node* createNode(int val) {
        Node* newNode = new Node;
        if(!newNode) {
            cout << "Memory error\n";
            return nullptr;
        }
        newNode->val = val;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }

    void insert(int val) {
        if(root == nullptr) {
            root = createNode(val);
            return;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if(temp->left == nullptr) {
                temp->left = createNode(val);
                break;
            } else {
                q.push(temp->left);
            }

            if(temp->right == nullptr) {
                temp->right = createNode(val);
                break;
            } else {
                q.push(temp->right);
            }
        }
    }

    // Function to print the tree nodes
    void printLevelOrder(Node* root) {
        if(root == nullptr)
            return;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* temp = q.front();
            cout << temp->val << " ";
            q.pop();

            if(temp->left != nullptr)
                q.push(temp->left);

            if(temp->right != nullptr)
                q.push(temp->right);
        }
    }

    void print() {
        printLevelOrder(root);
    }
};

int main() {
    MaxHeap h;
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.print();
    return 0;
}