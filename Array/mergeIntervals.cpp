#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    vector<vector<int>> res_intervals;

    if (intervals.size() == 0)
    {
        return res_intervals;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (auto itr : intervals)
    {
        if (itr[0] <= tempInterval[1])
        {
            tempInterval[1] = max(itr[1], tempInterval[1]);
        }
        else
        {
            res_intervals.push_back(tempInterval);
            tempInterval = itr;
        }
    }

    res_intervals.push_back(tempInterval);
    return res_intervals;
}

int main()
{
    vector<vector<int>> intervals = {{1,2},{2,6},{8,10}};
    vector<vector<int>> res_intervals = merge(intervals);

    for(auto it: res_intervals){
        cout<<"{";
        for(auto itr: it){
            cout<<itr<<",";
        }
        cout<<"},";
    }

    return 0;
}