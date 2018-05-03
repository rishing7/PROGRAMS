#include<bits/stdc++.h>
using namespace std;
#define N 4
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}
bool isSafe(int board[N][N], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        if(board[i][col]==1)
            return false;
    }
    for(int i=row,j=col; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j]==1)
            return false;
    }
    for(int i=row,j=col; i>=0 && j<N; i--,j++)
    {
        if(board[i][j]==1)
            return false;
    }
    return true;
}
bool printNQueenPos(int board[N][N], int row)
{
    static int k=0;
    if(row==N && k==0)
    {
        printSolution(board);
        k++;
        return true;
    }
    for(int i=0;i<N;i++)
    {
        if(isSafe(board, row, i))
        {
            board[row][i]=1;
            printNQueenPos(board, row+1);
            board[row][i]=0;
        }
    }
}
void solveNQ(int board[N][N],int row)
{
    if(printNQueenPos(board,row)==false)
    {
        cout<<"Solution doesn't Exist\n";
        return;
    }
    return ;
}
int main()
{
    int board[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    solveNQ(board,0);
    return 0;
}
