#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start)
{
    int i = start;
    int j =  6;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {6, 4, 7, 6, 5, 3, 1}; // {6,5,1,3,4,6,7} Ans
    int n = 7;
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

    swap(arr[i], arr[j]);

    reverse(arr, i + 1);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}