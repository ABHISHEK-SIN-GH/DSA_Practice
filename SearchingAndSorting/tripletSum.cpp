#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 4, sum = 2;
    int count = 0;
    int arr[] = {-2, 0, 1, 3};
    for (int i = 0; i < N; i++)
    {
        int j = i + 1;
        int k = N - 1;
        while (j < k)
        {
            int s = arr[i] + arr[j] + arr[k];
            if (s >= sum)
            {
                count++;
            }
            j++;
            k--;
        }
    }
    cout << count;
    return 0;
}