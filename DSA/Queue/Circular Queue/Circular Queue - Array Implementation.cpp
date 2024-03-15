#include<bits/stdc++.h>
using namespace std;

int rear = -1, front = -1 , n;

bool isEmpty();
bool isFull();
void enqueue(int queue[], int x);
int dequeue(int queue[]);
int Peek(int queue[]);
void PrintQueue(int queue[]);

int main()
{

    cout<<"Enter the size of the queue: ";
    cin>>n;
    int Circularqueue[n];
    enqueue(Circularqueue, 1);
    enqueue(Circularqueue, 2);
    enqueue(Circularqueue, 3);
    enqueue(Circularqueue, 4);
    enqueue(Circularqueue, 5);
    PrintQueue(Circularqueue);
    cout<<dequeue(Circularqueue)<<endl;
    PrintQueue(Circularqueue);
    return 0;


}


bool isEmpty()
{
    if(front == -1 && rear == -1)
        return true;
    return false;
}

bool isFull()
{
    if((rear+1 ) % n == front)
        return true;
    return false;
}

void enqueue(int queue[], int x)
{
    if(isFull())
    {
        cout<<"Queue is full\n";
        return;
    }
    else if(isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = x;
}

int dequeue(int queue[])
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    else if(front == rear)
    {
        cout<< "Dequeue element: ";
        int x = queue[front];
        front = rear = -1;
        return x;
    }
    else
    {
        cout<< "Dequeue element: ";
        int tem = queue[front];
        front = (front + 1) % n;
        return tem;
    }
}

int Peek(int queue[])
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    return queue[front];
}

void PrintQueue(int queue[])
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    for(int i = front; i <= rear; i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}
