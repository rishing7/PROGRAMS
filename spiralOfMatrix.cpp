#include<bits/stdc++.h>
using namespace std;
#define M 4
#define N 4
void spiral(int mat[M][N], int m, int n)
{
    int r=0,c=0;
    while(r<m && c<n)
    {
        for(int i=0;i<n; i++)
            cout<<mat[r][i]<<" ";
        r++;
        for(int i=c;i<m;i++)
            cout<<mat[i][n-1]<<" ";
        n--;
        if(r<m)
        {
            for(int i=n-1;i>=c;i--)
            {
                cout<<mat[m-1][i]<<" ";
            }
            m--;
        }
        if(c<n)
        {
            for(int i=m-1; i>=r; i--)
            {
                cout<<mat[i][c]<<" ";
            }
            c++;
        }
    }
}
int main()
{
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,8,7,6},
                   {5,4,3,2}
                };
    spiral(mat, 4, 4);
    return 0;
}
