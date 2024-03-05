#include<bits/stdc++.h>
using namespace std;

bool isOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    return false;
}
int Operation(int a, int b, char sign)
{
    if(sign == '+')
        return a + b;
    else if(sign == '-')
        return a - b;
    else if(sign == '*')
        return a * b;
    else if(sign == '/')
        return a / b;
}
int main()
{
    string s;
    cout<<"Enter the expression: ";
    getline(cin, s);
    int n = s.length();
    stack<char> st;
    for(int i = n-1; i>= 0; i--)
    {
        if(s[i] == ' ')
            continue;
        else if(!isOperator(s[i]))
        {
            st.push(s[i] - '0');
        }
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(Operation(a, b, s[i]));
        }
    }
    cout<<"Result: "<<(int)st.top()<<endl;
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)
