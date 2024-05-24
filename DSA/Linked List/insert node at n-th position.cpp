#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head; // global var

void PushFront(int x);
void PrintNode();
void Insert(int x, int n);

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
        PushFront(x);
        PrintNode();
    }

    cout<<"Enter an element and a position to insert: ";
    int x, p;
    cin>>x>>p;
    Insert(x,p);

    PrintNode();
    return 0;
}

void Insert(int x , int p)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if(p == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    
    Node* temp2 = head;
    for(int i = 0; i < p-2; i++) // p-2 : since 1 indexed
        temp2 = temp2->next;
    
    if(temp2 == NULL)
    {
        cout<<"INVALID Position\n";
        return;
    }
    cout << "temp2->data: " << temp2->data << endl;
    temp->next = temp2->next;
    temp2->next = temp;

}

void PushFront(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp -> next = NULL;

    // if head has not connected to any node
   // head = temp;

    // else

    if(head != NULL)
        temp -> next = head;  // preserving the earlier node into this next node
    head = temp; // putting this node's address in the head

    // as a result, this node has become the first node now
    // and the earlier one become the second node, connected with this node


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