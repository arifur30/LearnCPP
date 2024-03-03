#include<bits/stdc++.h>
using namespace std;

#define MAX 101

int A[MAX];
int top = -1;


void Push(int x);
void Pop();
void Print();
bool isEmpty();

int main()
{
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    
    Pop(); Print();
    
    Push(12); Print();

}



void Push(int x){
    if(top == MAX-1)
    {
        cout<<"Error: Stack Overflow"<<endl;
        return;
    }
    A[++top] = x;
}
void Pop()
{
    if(isEmpty())
    {
        cout<<"Error: No element to pop"<<endl;
        return;
    }
    top--;
}
void Print()
{
    cout<<"Stack: ";
    for(int i=0; i<=top; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

bool isEmpty()
{
    if(top == -1)
        return true;
    return false;
}