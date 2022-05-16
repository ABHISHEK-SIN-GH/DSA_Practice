#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--)
    arr[i] = arr[i-1];
    arr[0] = temp;
}

int main(){
int n = 8;
int a[] = {9, 8, 7, 6, 4, 2, 1, 3};

rotate(a,n);

for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}