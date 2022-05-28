#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7, s = 23;
    int arr[] = {10, 2, 3, 4, 5, 7, 8};
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 2; k < n; k++)
            {
                for (int m = 3; m < n; m++)
                {
                    // cout<<i<<j<<k<<m<<endl;
                    if(arr[i]+arr[j]+arr[k]+arr[m]==s){
                        cout<<arr[i]<<arr[j]<<arr[k]<<arr[m]<<endl;
                    }
                }
                
            }
            
        }
        
    }
    return 0;
}