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

bool isOpeningParenthesis(char ch)
{
    return ( ch == '(' || ch == '{' || ch == '[');
}
string infixToPostfix(string s) {
    stack<char> st;
    string res = "";

    for(char ch : s) {
        if(isOperator(ch)) {
            while(!st.empty() && precedence(st.top()) >= precedence(ch) && !isOpeningParenthesis(st.top())) {
                res += st.top();
                st.pop();
            }
            st.push(ch);
        } else if(isOpeningParenthesis(ch)) {
            st.push(ch);
        } else if(ch == ')' || ch == '}' || ch == ']') {
            while(!st.empty() && !isOpeningParenthesis(st.top())) {
                res += st.top();
                st.pop();
            }
            st.pop(); // pop the '('
        } 
        else {
            res += ch;
        }
    }

    while(!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    cout << infixToPostfix(s) << endl;
    return 0;
}