#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {2,6,1,9,4,5,3,11,12,13,14};
int counterArr[100000] = {0};
int n = sizeof(arr)/sizeof(arr[0]);

for (int i = 0; i < n; i++)
{
    counterArr[arr[i]]++;
}

int maxCounter = 0;
int counter = 0;
for (int i = 0; i <= 100000; i++)
{
    if(counterArr[i]==0){
        counter=0;
    }
    else{
        counter++;
    }
    cout<<counter<<" ";
    maxCounter = max(counter,maxCounter);
}

cout<<maxCounter;
return 0;
}