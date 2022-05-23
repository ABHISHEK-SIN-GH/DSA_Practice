#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){

int N = 5;

// cout<<fact(N);
// int currSum = 1;
// for (int i = 1; i <= N; i++)
// {
//     currSum = currSum * i;
// }
// cout<<currSum;

// vector<int> v;
// while (N % 10 != 0)
// {
//     int decDigit = N%10;
//     v.push_back(decDigit);
//     N = N/10;
// }
// reverse(v.begin(),v.end());
// for (auto itr: v)
// {
//     cout<<itr<<" ";
// }

vector<int> v;
v.push_back(1);

for (int i = 2; i <= N; i++)
{
    int carry = 0;
    for (int j = 0; j < v.size(); j++)
    {
        int val = v[j]*i + carry;
        v[j] = val%10;
        carry = val/10;
    }
    while (carry!=0)
    {
        v.push_back(carry%10);
        carry = carry/10;
    }
}

reverse(v.begin(),v.end());

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

return 0;
}