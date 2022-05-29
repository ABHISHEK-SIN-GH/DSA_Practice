#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "abcd";
unordered_set<string> ss;
for (int i = 0; i < s.size(); i++)
{
    for (int j = 1; j <= s.size()-i; j++)
    {
        cout<<s.substr(i,j)<<endl;
    }
}
for (auto st: ss)
{
    cout<<st<<" ";
}
return 0;
}