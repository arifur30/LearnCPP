#include<bits/stdc++.h>
using namespace std;

bool isParentheses(char ch)
{
    if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']')
        return true;
    return false;
}

bool isPair(char ch, char top)
{
    if(ch == ')' && top == '(')
        return true;
    else if(ch == '}' && top == '{')
        return true;
    else if(ch == ']' && top == '[')
        return true;
    return false;
}

int main()
{
    string s;
    cout<<"Enter the expression: ";
    getline(cin, s);
    int n = s.length();
    bool flag = true;
    
    stack<char> st;
    for(int i = 0; i<=n; i++)
    {
        if(isParentheses(s[i]))
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else if(isPair(s[i], st.top()))
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            
            }
        }
        else
            continue;
    }
    if(flag && st.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)
