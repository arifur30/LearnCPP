#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    Node* temp = front;
    if(front == NULL)
    {
        cout<<"Queue is empty\n";
        return;
    }
    if(front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    delete temp;

}

void PrintNode(Node* p)
{
    if(p == NULL) {
        cout<<endl;
        return;
    }
    cout<<p->data<<" ";
    PrintNode(p->next);
    
}
int main()
{

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    PrintNode(front);
    dequeue();
    PrintNode(front);
    return 0;


}
