#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void printDiagonally(int mat[R][C], int m, int n)
{
    int r=0;
    int c=0;
    while(r<m && c<n)
    {
            //if(r==c)
            cout<<mat[r][c]<<endl;
            r++,c++;
            for(int i=r,j=0; i>=0 && j<=c; i--,j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
            r++,c++;
    }
}
int main()
{
     int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,8,7,6},
                   {5,4,3,2}
                };
    printDiagonally(mat,4,4);
    return 0;
}
