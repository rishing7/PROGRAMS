#include<bits/stdc++.h>
using namespace std;
#define R 20
#define C 20
void binaryMat(int mat[R][C], int m, int n)
{
    bool row[m];
    memset(row, 0, sizeof(row));

    bool col[n];
    memset(col, 0, sizeof(col));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mat[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(row[i]==1 || col[j]==1)
                {
                    mat[i][j]=1;
                }
            }
        }
}
int main()
{
    int mat[R][C];
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>mat[i][j];
            }
        }
        binaryMat(mat, m, n);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
