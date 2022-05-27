#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    int i = start;
    int j = end - 1;
    while (i <= j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    int i = n - 2;

    while (i >= 0 && arr[i + 1] <= arr[i])
    {
        i--;
    }

    int j = i;

    while (arr[j + 1] >= arr[i])
    {
        j++;
    }

    cout<<i<<" "<<j<<endl;

    swap(arr[i], arr[j]);

    reverse(arr, i + 1, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}