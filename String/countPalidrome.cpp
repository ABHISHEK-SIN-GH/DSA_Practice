#include<bits/stdc++.h>
using namespace std;
bool checkPalidrome(string s){
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(s[i]!=s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
string s = "aa";
vector<string> ss;
for (int i = 0; i < s.size(); i++)
{
    for (int j = 1; j <= s.size()-i; j++)
    {
        if(checkPalidrome(s.substr(i,j))){
            ss.push_back(s.substr(i,j));
        }
    }
}
cout<<ss.size();
return 0;
}