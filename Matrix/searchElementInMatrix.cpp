#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 3, c = 4;
    int mat[r][c] = {{1, 3, 5, 7},
                     {10, 11, 16, 20},
                     {23, 30, 34, 60}};
    int rowOp = c-1;
    int colOp = 0; 
    int target = 0;
    
    while(rowOp>=0 && colOp<=r-1){
        if(mat[colOp][rowOp]<target){
            cout<<mat[colOp][rowOp]<<endl;
            colOp++;
        }
        else if(mat[colOp][rowOp]>target){
            cout<<mat[colOp][rowOp]<<endl;
            rowOp--;
        }else{
            cout<<mat[colOp][rowOp];
            return 0;
        }
    }         

    cout<<-1;
    return 0;
}