#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

struct Node* head; // global var

void InsertatHEAD(int x);
void PrintNode();
void Reverse();
void InsertatTail(int x);
int main(int argc, char const *argv[])
{
    head = NULL;
    InsertatHEAD(2); PrintNode(); Reverse();
    InsertatHEAD(4); PrintNode(); Reverse();
    InsertatHEAD(6); PrintNode(); Reverse();
    InsertatHEAD(5); PrintNode(); Reverse();
    
    return 0;
}


void InsertatHEAD(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}


void PrintNode()
{
    Node* temp1 = head;     // local variable at stack
    cout<<"Forward: ";
    while (temp1 != NULL)   // traversing
    {
        cout<<(*temp1).data<<" ";
        temp1 = temp1->next;  // pointing to the next element's node
    }
    cout<<endl;
    
}

void Reverse()
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        // traversing forward
        temp = temp->next;
    }
    // last node
    cout<<"Reverse: ";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void InsertatTail(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}