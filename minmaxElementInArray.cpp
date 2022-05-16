#include <bits/stdc++.h>
using namespace std;

struct MinMax
{
    int min;
    int max;
};

MinMax minmaxElement(int arr[], int n)
{

    int i;
    struct MinMax minmax;

    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
        return minmax;
    }

    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax;

}

int main()
{
    int arr[] = {10,20,40,0,50,5};
    int n = 6;
    MinMax minmax = minmaxElement(arr,n);
    cout<<"Min : "<<minmax.min<<endl;
    cout<<"Max : "<<minmax.max<<endl;
    return 0;
}