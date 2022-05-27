#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<int,int> map;    
int L = 6, N = 78;
int arr[] = {5, 20, 3, 2, 5, 80};
for(int i = 0; i<L; i++){
    for (int j = 0; j < L; j++)
    {
        if(i==j){
            continue;
        }
        if(arr[i]-N==arr[j]){
            cout<<1;
        }
    }
}
cout<<-1;
return 0;
}