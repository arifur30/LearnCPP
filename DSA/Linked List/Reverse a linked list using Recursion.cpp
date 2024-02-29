#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head; // global var

void PushBack(int x);
void PrintNode(Node* p);
void Reverse(Node* headref);

int main(int argc, char const *argv[])
{
    head = NULL;

    cout << "How many numbers: ";
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the element: ";
        int x;
        cin>>x;
        PushBack(x);
    }
    PrintNode(head);

    cout<<"Reverse : ";
    Reverse(head);
    cout<<endl;
    PrintNode(head);
    
    return 0;
}

void Reverse(Node* p)
{
    if(p == NULL) {
        return;
    }
    
    Reverse(p->next);
    cout<<p->data<<" ";
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


void PushBack(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp -> next = NULL;

    // if head has not connected to any node
   // head = temp;

    // else

    if(head == NULL){
        head = temp;    
        return;
    } 
    Node* temp1 = head;
    while(temp1->next != NULL)   // traversing
    {
        temp1 = temp1->next;  // pointing to the next element's node
    }
    temp1->next = temp;  // connecting the last node to the new node

}

