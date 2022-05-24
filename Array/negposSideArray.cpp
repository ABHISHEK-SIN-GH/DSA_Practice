#include <bits/stdc++.h>
using namespace std;

void negPosArray(int arr[], int n)
{

    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] < 0)
        {
            left++;
        }
        else if (arr[right] > 0)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
        }
    }
}

int main()
{
    int arr[] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
    int n = sizeof(arr)/sizeof(arr[0]);

    negPosArray(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}