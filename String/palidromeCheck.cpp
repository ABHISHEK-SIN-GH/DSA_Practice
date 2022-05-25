#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(s[i]!=s[j]){
            cout<<"Not a palidrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palidrome";
    return 0;
}