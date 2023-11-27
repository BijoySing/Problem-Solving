#include<iostream>
using namespace std;
const int N = 9;
void printing(int grid[N][N])
{
    for( int i=0; i<N; i++)
    {
        for( int j=0; j<N; j++)
        {
            cout << grid[i][j] << "  ";
        }
        cout << endl;
    }
            cout << endl;
        cout << endl;


}
bool safe(int grid[N][N], int row, int col,int num)
{
    for( int i=0; i<9; i++)
    {
        if(grid[row][i]==num) return false;
    }
    for( int j=0; j<9; j++)
    {
        if(grid[j][col]==num) return false;
    }
    int nrow = row-row%3;
    int ncol = col-col%3;
    for( int i=0; i<3; i++)
    {
        {
            for( int j=0; j<3; j++)
            {
                if(grid[nrow+i][ncol+j]==num) return false;
            }
        }
    }
    //printing(grid);
    return true;
}
bool solve(int grid[N][N], int row, int col)
{
    if(row==N-1 && col==N) return true;
    if(col==N)
    {

        row+=1;
        col=0;
    }
    if(grid[row][col]>0)
        return solve(grid,row,col+1);
    for( int num=1; num<=N; num++)
    {
        if(safe(grid,row,col,num))
        {
            grid[row][col]=num;
            if(solve(grid,row,col+1))
            {
                return true;
            }
            grid[row][col]=0;
        }

    }
    return false;
}
int main()
{
    int i,j;
//    int grid[N][N];
//    for(i=0; i<N; i++)
//    {
//        for( j=0; j<N; j++) cin>>grid[i][j];
//    }
 int grid[N][N] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };
    if (solve(grid, 0, 0))
    {
        cout << "Solved Sudoku:" << endl;
        printing(grid);
    }

    else cout << "No solution found\n";
}
/**
 3 0 6 5 0 8 4 0 0
 5 2 0 0 0 0 0 0 0
 0 8 7 0 0 0 0 3 1
 0 0 3 0 1 0 0 8 0
 9 0 0 8 6 3 0 0 5
 0 5 0 0 9 0 6 0 0
 1 3 0 0 0 0 2 5 0
 0 0 0 0 0 0 0 7 4
 0 0 5 2 0 6 3 0 0
**/
