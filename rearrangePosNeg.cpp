#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = { -5, -2, 5, -2, -4, 7, 1, 8, 0, -8 };
int n = sizeof(arr)/sizeof(arr[0]);
int i = 0;
int j = n-1;

while(i<j){

    if(arr[i]>=0){
        i++;
    }

    if(arr[j]<0){
        j--;
    }

    if(arr[i]<0 && arr[j]>=0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

i = 0;
j = n-1;
while (arr[j]<0 && i<n)
{
    swap(arr[i],arr[j]);
    j--;
    i+=2;
}


for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}