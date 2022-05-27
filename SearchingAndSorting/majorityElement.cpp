#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 1, 5, 5, 6};
    int size = 11;
    // your code here
    int count = 0;
    int maxCount = 0;
    int number = -1;
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i + 1] || i == size - 1)
        {
            count = count + 1;
            if (count >= maxCount)
            {
                maxCount = count;
                number = arr[i];
            }
            count = 0;
        }
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    if (maxCount > size / 2)
    {
        cout << number;
    }
    else
    {
        cout << -1;
    }
    return 0;
}