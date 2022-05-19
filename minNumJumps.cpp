#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n == 1)
           return 0;

        if(arr[0] == 0)
           return -1;

        int step = 0, maxR = INT_MIN, jump = 0;
    
        for(int i=0;i<n-1;i++)
        {
           maxR = max(maxR,i+arr[i]);
           
           if(i == step)
           {
               step = maxR;
               jump++;
               if(step >= n-1)
                   break;
           }
        }
           
       if(step>=n-1)
           return jump;
       return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}