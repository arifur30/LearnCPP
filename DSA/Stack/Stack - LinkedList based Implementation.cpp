#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *top = NULL;

void Push(int x);
void Pop();
void Print(Node* headref);
bool isEmpty();

int main()
{
    Push(2);
    cout<<"Stack: ";    Print(top);
    Push(5); 
    cout<<"Stack: ";    Print(top);
    Push(10); 
    cout<<"Stack: ";     Print(top);
    
    Pop(); 
    cout<<"Stack: ";     Print(top);
    
    Push(12); 
    cout<<"Stack: ";     Print(top);

}



void Push(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;

    top = newNode;
}
void Pop()
{
    if(isEmpty())
    {
        cout<<"Error: No element to pop"<<endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}
void Print(Node* p)
{
    if(p == NULL) {
        cout<<endl;
        return;
    }
    cout<<p->data<<" ";
    Print(p->next);
}

bool isEmpty()
{
    if(top == NULL)
        return true;
    return false;
}