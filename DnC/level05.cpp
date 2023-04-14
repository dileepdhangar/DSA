
#include <iostream>
#include <vector>
using namespace std;
void Printsolution(vector<vector<char>> &Board, int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cout << Board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}
bool ISsafe(int row, int col, vector<vector<char>> &Board, int n)
{
    int i = row;
    int j = col;

    while (j >= 0)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {

        if (Board[i][j] == 'Q')
        {

            i--;
            j--;
        }
    }

    i = row;
    j = col;
    while (i <= n && j >= 0)
    {

        if (Board[i][j] == 'Q')
        {

            return false;
        }
        i++;
        j--;
    }
    return true;
}

void Solve(vector<vector<char>> &Board, int col, int n)
{

    // base case
    if (col >= n)
    {

        Printsolution(Board, n);
        return;
    }

    // 1st case solve
    for (int row = 0; row < n; row++)
    {
        if (ISsafe(row, col, Board, n))
        {

            Board[row][col] = 'Q';
            // recursion
            Solve(Board, col + 1, n);

            // backtracking

            Board[row][col] = '_';
        }
    }
}

int main()
{
    int n = 4;

    vector<vector<char>> Board(n, vector<char>(n, '_'));
    int col = 0;
    // _ queen placed nhi  haiu
    // Q queen placed  haiu
    Solve(Board, col, n);

    return 0;
}
