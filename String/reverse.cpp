#include <bits/stdc++.h>
using namespace std;
int main()
{
    char strg[] = {'a', 'b', 'c', 'x', 'y', 'z'};
    int n = sizeof(strg) / sizeof(strg[0]);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(strg[i], strg[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<strg[i]<<" ";
    }
    return 0;
}