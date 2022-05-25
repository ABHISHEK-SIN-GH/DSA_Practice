#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, m = 4;
    int M[n][m] = {{0, 1, 1, 0},
                   {1, 1, 1, 1},
                   {1, 1, 1, 1},
                   {1, 1, 0, 0}};

    int maxDepth = 0;
    int curDepth = 0;
    for (int i = 0; i < n; i++)
    {
        int maxWidth = 0;
        int curWidth = 0;
        for (int j = 0; j < m; j++)
        {
            if(M[i][j]==1){
                curWidth = curWidth + 1;
            }else{
                curWidth = 0;
            }
            if(curWidth==maxWidth){
                curDepth = curDepth + 1;
            }
            maxWidth = max(maxWidth,curWidth);
        }
        maxDepth = max(maxDepth,curDepth);
        cout<<maxWidth<<","<<maxDepth;
    }
    return 0;
}