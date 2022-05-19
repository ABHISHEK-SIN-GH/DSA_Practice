#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int i = 0;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    reverseArray(arr,n);

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}