#include <bits/stdc++.h>
using namespace std;
int checkChar(char r)
{
    if (r == 'I')
    {
        return 1;
    }
    else if (r == 'V')
    {
        return 5;
    }
    else if (r == 'X')
    {
        return 10;
    }
    else if (r == 'L')
    {
        return 50;
    }
    else if (r == 'C')
    {
        return 100;
    }
    else if (r == 'D')
    {
        return 500;
    }
    else if (r == 'M')
    {
        return 1000;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string roman = "CMIX";
    int prev = 0;
    int ans = 0;
    for (int i = 0; i < roman.size(); i++)
    {
        int curr = checkChar(roman[i]);
        if(prev==curr){
            prev+=curr;
        }
        if(prev<curr){
            curr = curr - 2*prev;
        }
        cout<<curr<<prev<<endl;
        ans += curr;
        prev = curr;
    }
    cout<<ans;
    return 0;
}