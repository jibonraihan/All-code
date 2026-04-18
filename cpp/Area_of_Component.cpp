#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> GD;
vector<vector<bool>> V;
vector<pair<int, int>> pr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int G, M;
bool isValid(int x, int y)
{
    return x >= 0 && x < G && y >= 0 && y < M &&
           GD[x][y] == '.' && !V[x][y];
}

int dfs(int x, int y)
{
    V[x][y] = true;
    int size = 1;

    for (int i = 0; i < 4; i++)
    {
        int p = x + pr[i].first;
        int q = y + pr[i].second;

        if (isValid(p, q))
            size += dfs(p, q);
    }
    return size;
}

int main()
{
    cin >> G >> M;
    V.resize(G, vector<bool>(M, false));
    GD.resize(G, vector<char>(M));

    for (int i = 0; i < G; i++)
        for (int j = 0; j < M; j++)
            cin >> GD[i][j];

    int mn = INT_MAX;
    bool flag = false;

    for (int i = 0; i < G; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (GD[i][j] == '.' && !V[i][j])
            {
                int area = dfs(i, j);
                mn = min(mn, area);
                flag = true;
            }
        }
    }

    if (flag == false)
        cout << -1 << endl;
    else
        cout << mn << endl;

    return 0;
}