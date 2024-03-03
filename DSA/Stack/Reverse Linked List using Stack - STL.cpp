#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;
Node* Reverse(Node* headref) {
    // Stack to store elements of list 
    stack<Node *> stk; 
  
    // Push the elements of list to stack 
    Node* ptr = headref; 
    while (ptr->next != NULL) { 
        stk.push(ptr); 
        ptr = ptr->next; 
    } 
  
    // Pop from stack and replace 
    // current nodes value' 
    headref = ptr; 
    while (!stk.empty()) { 
        ptr->next = stk.top(); 
  
        ptr = ptr->next; 
        stk.pop(); 
    } 
      
    ptr->next = NULL; 
      
    return headref; 

}

void Insert(int);
void PrintNode();

int main()
{
    head = NULL;
    cout<<"Enter total number of nodes: ";
    int n;
    cin>>n;

    cout<<"Enter nodes: ";
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        Insert(x);
    }
    cout<<"Original LL: ";
    PrintNode();

    cout<<"Reverse LL: ";
    head = Reverse(head);
    PrintNode();
   

    cout<<"Time Complexity: O(n)\nSpace Complexity: O(n)";


    return 0;
}

void Insert(int x)
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
// Time Complexity: O(n)
// Space Complexity: O(n)
