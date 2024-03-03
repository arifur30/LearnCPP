#include<bits/stdc++.h>
using namespace std;

bool isParentheses(char ch)
{
    if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']')
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
    int unclosed_1 = 0, unclosed_2 = 0, unclosed_3 = 0;
    for(int i = 0; i<=n; i++)
    {
        if(isParentheses(s[i]))
        {
            if(s[i] == '(')
                unclosed_1++;
            else if(s[i] == ')')
            {
                if(unclosed_1)
                {
                    unclosed_1--;
                }
                else
                {
                    cout<<"NO\n";
                    flag = false;
                    break;
                
                }
            }
            else if(s[i] == '{')
                unclosed_2++;
            else if(s[i] == '}')
            {
                if(unclosed_2)
                {
                    unclosed_2--;
                }
                else
                {
                    cout<<"NO\n";
                    flag = false;
                    break;
                }
            }
            else if(s[i] == '[')
                unclosed_3++;
            else if(s[i] == ']')
            {
                if(unclosed_3)
                {
                    unclosed_3--;
                }
                else
                {
                    cout<<"NO\n";
                    flag = false;
                    break;
                }
            }
        }
        else
            continue;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
