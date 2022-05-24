#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {4, 2, 3, 1, 6}; // 4 6 3 4 10
int n = sizeof(arr)/sizeof(arr[0]);

// for (int i = 0; i < n; i++)
// {
//     int cursum = 0;
//     for (int j = i; j < n; j++)
//     {
//         cursum+=arr[j];
//         if(cursum==0){
//             return 1;
//             break;
//         }
//     }
// }

unordered_map<int,bool> map;
int sum = 0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
    if(sum==0 || map[sum]==true){
        cout<<"Yes";
        return 0;
    }
    map[sum]=1;
}
cout<<"No";
return 0;
}