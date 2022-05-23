#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = 0;
    int resArr[] = new int[88];

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            resArr[k] = arr[i];
            i++;
        }
        else
        {
            resArr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= r)
    {
        resArr[k] = arr[j];
        j++;
        k++;
    }

    while (i <= mid)
    {
        resArr[k] = arr[j];
        i++;
        k++;
    }
    
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + r / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {9, 3, 4, 2, 5, 6, 8, 1};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}