#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {2,3,5,1,4,6};
int n = sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if(arr[i]+arr[j]+arr[k]==9){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }       
        }
    }
}

return 0;
}