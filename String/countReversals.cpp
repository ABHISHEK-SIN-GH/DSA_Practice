#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string s = "}{{}}{{{";
    if (s.size() % 2 != 0)
    {
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}' && !st.empty())
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }

    int lb = 0;
    int rb = 0;
    int ans = 0;
    while (!st.empty())
    {
        if ( st.top() == '{')
        {
            lb++;
            st.pop();
        }
        else if ( st.top() == '}')
        {
            rb++;
            st.pop();
        }
        else
        {
            return -1;
        }
    }
    ans = ceil(lb / 2.0) + ceil(rb / 2.0);
    return ans;

    return 0;
}