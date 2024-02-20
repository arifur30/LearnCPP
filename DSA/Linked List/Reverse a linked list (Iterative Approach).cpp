#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head; // global var

void PushBack(int x);
void PrintNode();
void Reverse();

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
    PrintNode();

    cout<<"Reverse : ";
    Reverse();
    PrintNode();
    
    return 0;
}

void Reverse()
{
    Node *temp, *prev , *next ;
    temp = head;
    prev = NULL;
    if(head == NULL) return;
    while(temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    // Now next and temp is NULL and prev is the last node
    head = prev;
    return;
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


void PrintNode()
{
    Node* temp1 = head;
    while (temp1 != NULL)   // traversing
    {
        cout<<(*temp1).data<<" ";
        temp1 = temp1->next;  // pointing to the next element's node
    }
    cout<<endl;
    
}