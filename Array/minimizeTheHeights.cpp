#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
      sort(arr,arr+n);
       int maxH = arr[n-1];
       int minH = arr[0];
       int res = maxH - minH;
       
       for(int i=1;i<n;i++){
           
           maxH = max(arr[n-1]-k , arr[i-1]+k);
           minH = min(arr[0]+k , arr[i]-k);
           
           if(minH < 0) continue;
           
           res=min(res,maxH-minH);
           
       }
       
       return res;
       
   }
  
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  