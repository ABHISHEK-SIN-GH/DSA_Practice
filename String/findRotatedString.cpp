#include<bits/stdc++.h>
using namespace std;

int main(){
string s1 = "abacd";
string s2 = "cdaba";
string temp = s1+s2;
if(s1.size()!=s2.size()){
    cout<<"Not Rotated";
    return 0;
}else if(temp.find(s2)){
    cout<<"Rotated";
    return 0;
}else{
    cout<<"Not Rotated";
    return 0;
}
}