#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int curr = 0;
    int left = 0;
    int right = n - 1;
    while (curr <= right)
    {
        if (a[curr] == 0)
        {
            swap(a[curr], a[left]);
            left++;
            curr++;
        }

        else if (a[curr] == 2)
        {
            swap(a[curr], a[right]);
            right--;
        }

        else
        {
            curr++;
        }
    }
}

int main()
{
    int n = 5;
    int arr[]= {0, 2, 1, 2, 0};

    sort012(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}