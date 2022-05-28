#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x = "({[]})";
    stack<char> st;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[')
        {
            st.push(x[i]);
        }
        else if (!st.empty() && x[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                cout << -1;
            }
        }
        else if (!st.empty() && x[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                cout << -1;
            }
        }
        else if (!st.empty() && x[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                cout << -1;
            }
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}