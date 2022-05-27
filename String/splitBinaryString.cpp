#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "0000000000";
int cnt = 0;
int itr = 0;
int i = 0;
int j = 0;
int n = s.size();
while(n>itr){
    if(s[itr++]=='1'){
        i++;
    }
    if(s[itr++]=='0'){
        j++;
    }
    if(i==j){
        cnt++;
    }
}
if(cnt>0){
    cout<<cnt;
}else{
    cout<<-1;
}
return 0;
}