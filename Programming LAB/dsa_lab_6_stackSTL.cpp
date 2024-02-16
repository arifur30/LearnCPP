#include <iostream> 
#include <stack>
using namespace std;
int main() 
{
    stack<int> stack;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i = 0 ; i < n; i++)
    {
        int temp;
        cin>>temp;
        stack.push(temp);
    }
    int num = 0;
    stack.push(num);
    stack.pop();
    cout<<"The stack is: ";
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
  
}