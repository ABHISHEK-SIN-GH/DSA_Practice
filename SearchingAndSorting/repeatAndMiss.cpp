#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 6, 3, 4, 1, 6, 7, 2};
    int *arx = new int[2];
    int n = 8;
    sort(arr, arr+n);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arx[0] = arr[i];
        }
        if (arr[i] != i + 1)
        {
            if(i==0){
                arx[1] = 1;
            }
            else if(i==n-1){
                arx[1] = n;
            }else if((arr[i - 1] < i + 1 && i + 1 < arr[i + 1])){
                arx[1] = i + 1;
            }else{
                continue;
            }
        }
    }

    cout<<arx[0]<<" "<<arx[1];
    return 0;
}