#include<bits/stdc++.h>
using namespace std;

int main(){
string s1 = "x1y2x";
string s2 = "xyx12";
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
if(s1==s2){
    cout<<"Valid Shuffle";
}else{
    cout<<"Invalid Shuffle";
}
return 0;
}