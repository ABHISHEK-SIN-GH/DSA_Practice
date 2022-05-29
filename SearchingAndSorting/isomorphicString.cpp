#include<bits/stdc++.h>
using namespace std;

int main(){
string str1 = "aab";
string str2 = "xxy";
if(str1.length()!=str2.length()){
    cout<<0;
}
unordered_map<char,int> map1;
unordered_map<char,int> map2;
for (int i = 0; i < str1.length(); i++)
{
    map1[str1[i]]++;
    map2[str2[i]]++;
}
if(map1.size()!=map2.size()){
    cout<<0;
}
else{
    for (auto itr1: map1)
    {
        for (auto itr2: map2)
        {
            if(itr1.second!=itr2.second){
                cout<<itr1.first<<" "<<itr1.second<<endl;
                cout<<itr2.first<<" "<<itr2.second<<endl;
                break;
            }   
        }
    }
    cout<<1;
}
return 0;
}