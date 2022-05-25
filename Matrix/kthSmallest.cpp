#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>> mat, int n, int k)
{
    // Your code here
    int ptr = 0;
    int *arr = new int[n * n];
    int key = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[ptr] = mat[i][j];
            ptr++;
        }
    }

    sort(arr, arr + ptr);

    for (int i = 0; i < ptr; i++)
    {
        if (i == k - 1)
        {
            key = arr[i];
            break;
        }
    }

    return key;
}

int main()
{
    int n = 3;
    int k = 6;
    vector<vector<int>> arr = {{1, 2, 3},
                               {5, 6, 7},
                               {9, 10, 11}};

    cout << kthSmallest(arr, n, k);
    return 0;
}