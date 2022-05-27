#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> arr, int start)
{
    int i = start;
    int j = arr.size() - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

vector<int> nextPermutation(int N, vector<int> arr)
{
    // code
    int i = N - 2;

    while (i >= 0 && arr[i + 1] <= arr[i])
    {
        i--;
    }

    int j = i;

    while (arr[j + 1] >= arr[i])
    {
        j++;
    }

    swap(arr[i], arr[--j]);

    reverse(arr, i + 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return arr;
}

int main(){
int N = 6;
vector<int> NN;
NN.push_back(1);
NN.push_back(4);
NN.push_back(6);
NN.push_back(5);
NN.push_back(2);
NN.push_back(3);
nextPermutation(N,NN);
return 0;
}