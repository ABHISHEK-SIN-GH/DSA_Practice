#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 4;
    int Mat[N][N] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    vector<int> sortedMatrix;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sortedMatrix.push_back(Mat[i][j]);
        }
    }

    sort(sortedMatrix.begin(),sortedMatrix.end());

    int k = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Mat[i][j] = sortedMatrix[k];
            k++;
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}