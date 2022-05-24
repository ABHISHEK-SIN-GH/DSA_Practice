#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    int n = r + 1;
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{
    // TestCase 1
    // int n = 6;
    // int arr[] = {7, 10, 4, 3, 20, 15};
    // int k = 3;

    // TestCase 2
    int n = 5;
    int arr[] = {7, 10, 4, 20, 15};
    int k = 4;

    cout<<k<<"th smallest no. is = "<<kthSmallest(arr,0,n-1,k);
    return 0;
}