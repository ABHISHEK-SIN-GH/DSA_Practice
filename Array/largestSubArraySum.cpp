#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long ans = arr[0];
    long long cur = ans;
    for (int i = 1; i < n; i++)
    {
        if (cur < 0)
        {
            cur = arr[i];
        }
        else
        {
            cur = cur + arr[i];
        }
        ans = max(ans, cur);
    }
    return ans;
}

int main()
{
    int n = 5;
    int arr[] = {1,2,3,-2,5};
    cout<<maxSubarraySum(arr,n);
    return 0;
}