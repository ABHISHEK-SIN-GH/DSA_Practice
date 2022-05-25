#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 3, c = 4;

    int arr[r][c] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int left = 0;
    int top = 0;
    int right = c - 1;
    int bottom = r - 1;
    int direction = 0;
    int* ans = new int[r*c];
    int k = 0;

    /*
            direction = 0 left to right
            direction = 1 top to down
            direction = 2 right to left
            direction = 3 down to top
    */

    while (left <= right && top <= bottom)
    {

        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                // cout << arr[top][i] << " ";
                ans[k++] = arr[top][i];
            }
            top++;
        }

        if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                // cout << arr[i][right] << " ";
                ans[k++] = arr[i][right];
            }
            right--;
        }

        if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                // cout << arr[bottom][i] << " ";
                ans[k++] = arr[bottom][i];
            }
            bottom--;
        }

        if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                // cout << arr[i][left] << " ";
                ans[k++] = arr[i][left];
            }
            left++;
        }

        direction = (direction + 1) % 4;

    }

    for (int i = 0; i < k; i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}