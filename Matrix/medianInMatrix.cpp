#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 3, c = 3;
    int mat[r][c] = {{0, 0, 0},
                     {0, 0, 1},
                     {0, 0, 0}};
    int rowOp = c - 1;
    int colOp = 0;
    int row = -1;

    while (rowOp >= 0 && colOp <= r - 1)
    {

        if (mat[colOp][rowOp] == 0)
        {
            // cout << mat[colOp++][rowOp] << endl;
            colOp++;
        }
        else if (mat[colOp][rowOp] == 1)
        {
            row = colOp;
            // cout << mat[colOp][rowOp--] << endl;
            rowOp--;
        }
    }

    cout<<row<<endl;
    return 0;
}