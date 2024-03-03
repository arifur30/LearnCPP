#include<iostream>
#include<stack>
using namespace std;

void Reverse(string& str, int n)
{
    stack<char>s;
    for(int i = 0;  i< n; i++)
    {
        s.push(str[i]);
    }

    for(int i = 0; i< n; i++)
    {
        str[i] = s.top();
        s.pop();
    }
}

int main()
{
    cout<<"Enter a string: ";
    string str;
    cin>>str;
    Reverse(str, str.length());
    cout<<"Reversed string: "<<str<<endl;

    return 0;
}
