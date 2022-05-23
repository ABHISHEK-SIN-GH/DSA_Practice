#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {-2, 1, 2, 6, 1};
int n = sizeof(arr)/sizeof(arr[0]);

int ans = arr[0];
int maxPro = ans;
int minPro = ans;

for (int i = 1; i < n; i++)
{
    if(arr[i]<0){
        swap(maxPro,minPro);
    }
    maxPro = max(arr[i],maxPro*arr[i]);
    minPro = min(arr[i],minPro*arr[i]);
    ans = max(maxPro,ans);
}

cout<<ans<<" ";

return 0;
}