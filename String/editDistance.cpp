#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    int stLen = 0;
    int ttLen = 0;
    string st = "geks";
    string tt = "gesk";
    unordered_map<char,int> s;
    unordered_map<char,int> t;
    for (int i = 0; i < st.size(); i++)
    {
        s[st[i]]++;
        stLen++;
    }
    for (int i = 0; i < tt.size(); i++)
    {
        t[tt[i]];
        ttLen++;
    }
    for(auto i:s){
        auto itr = t.find(i.first);
        if(itr->first){
            count++;
        }
    }
    cout<<max(stLen,ttLen)-count;
return 0;
}