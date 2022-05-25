#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aabsheek";
    unordered_map<char, int> map;
    for (int i = 0; i < s.size(); i++)
    {
        map[s[i]]++;
    }
    for (auto i : map)
    {
        if (i.second > 1)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}