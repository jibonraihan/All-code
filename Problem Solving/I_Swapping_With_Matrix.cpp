#include <bits/stdc++.h>
using namespace std;


void Swap_column(vector<vector<int>> &mat, int x, int y)
{
    if (x >= 0 && x < mat[0].size() && y >= 0 && y < mat[0].size())
    {
        for(int i=0; i<mat.size(); i++)
        {
            swap(mat[i][x], mat[i][y]);
        }
    }
}
void Swap_row(vector<vector<int>> &mat, int x, int y)
{
    if (x >= 0 && x < mat.size() && y >= 0 && y < mat.size())
    {
        swap(mat[x], mat[y]);
    }
    Swap_column(mat, x, y);
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    Swap_row(mat, x, y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}