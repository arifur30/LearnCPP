#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head; // global var

void PushBack(int x);
void PrintNode();
void Delete(int);

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
        PrintNode();
    }

    cout<<"Enter the position of node to delete (1,2,...): ";
    int p;
    cin>>p;
    Delete(p);

    PrintNode();
    return 0;
}

void Delete(int position)
{  
    Node* temp1 = head;
    if(head == NULL) return; // if the list is empty
    if(position == 1)
    {
        head = temp1->next; // head now points to second node
        free(temp1); // delete the first node
        return;
    }
    for(int i = 0;i < position-2; i++)
    {
        temp1 = temp1->next; // temp1 points to (n-1)th node
    }
    Node* temp2 = temp1->next; // nth node
    temp1->next = temp2->next; // linking n-1 th node with (n+1)th node
    free(temp2); // delete the nth node
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