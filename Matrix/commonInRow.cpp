#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[4][5] = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };

    int r = 4;
    int c = 5;

    unordered_map<int, int> matMap;

    for (int i = 0; i < 4; i++)
    {
        unordered_set<int> matSet;
        
        for (int j = 0; j < 5; j++)
        {
            matSet.insert(mat[i][j]);
        }
        
        for (auto itr: matSet)
        {
            matMap[itr]++;            
        }
        
    }
    
    for (auto itr: matMap)
    {
        if(itr.second==r){
            cout<<itr.first<<",";
        }
    }
    
    return 0;
}