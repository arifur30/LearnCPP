#include<bits/stdc++.h>
using namespace std;

bool isOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    return false;
}

int precedence(char ch)
{
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    return 0;
}

int main(int argc, char const *argv[])
{
    stack<char> st;
    string res = "";
    string s;
    cin>>s;
    int n = s.length();

    for(int i = 0; i < n; i++)
    {
        if(isOperator(s[i]))
        {
            if(!st.empty() && precedence(st.top()) >= precedence(s[i]))
            {
                while(!st.empty() && precedence(st.top()) >= precedence(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        else
        {
            res += s[i];
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout<<res<<endl;
    return 0;
}
