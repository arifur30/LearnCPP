#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;
};

Node* head = NULL;

void PrintNode();
void Insertnode(int x);
void Insertafter(Node* prev_node, int x);
void DeleteNode(int position);

int main()
{
    Insertnode(1);
    Insertnode(2);
    Insertnode(3);
    Insertnode(4);
    PrintNode();

    cout<<"Insert any number: ";
    int x;
    cin>>x;
    cout<<"Insert after which node: ";
    int y;
    cin>>y;
    Node* current = new Node();
    current = head;
    for(int i = 1; i < y && current != NULL; i++)
    {
        current = current->next;
    }
    Insertafter(current, x);
    PrintNode();
    cout<<"Delete which node: ";
    cin>>x;
    DeleteNode(x);
    cout<<endl;
    PrintNode();

    return 0;
}

void Insertnode(int x)
{
    Node *temp = new Node();

    temp->data = x;
    temp->next = NULL;

    if(head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}


void PrintNode()
{
    Node* temp = new Node();

    temp = head;

    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void Insertafter(Node* prev_node, int x)
{
    if(prev_node == NULL)
    {
        cout<<"Previous node cannot be NULL"<<endl;
        return;
    }

    Node* temp = new Node();

    temp->data = x;
    temp->next = prev_node->next;
    prev_node->next = temp;
}

void DeleteNode(int position)
{
    Node* temp = new Node();
    Node* prev = new Node();
    temp = head;
    prev = head;
    for(int i = 0; i < position; i++)
    {
        if(i == 0 && position == 1){
            head = head->next;
            free(temp);}
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if(prev == NULL) // position was greater than number of nodes in the list
                    break;
                temp = temp->next; 
            }
        }
    }
}