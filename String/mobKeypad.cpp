#include <bits/stdc++.h>
using namespace std;
int main()
{
    string alphabet[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
    string s = "GEEKS FOR GEEKS";
    string a = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            a = a + "0";
        }
        else
        {
            int idx = s[i] - 'A';
            a = a + alphabet[idx];
        }
    }
    cout << a;
    return 0;
}