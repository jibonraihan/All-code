#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
char ar[1000][1000];
vector<pair<int, int>> dr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int N, M, x, y;

bool isValid(int i, int j)
{
    return (i >= 0 && i < M && j >= 0 && j < N && ar[i][j] != '#');
}

bool DFS(int i, int j)
{
    if (i == x && j == y)
        return true;

    vis[i][j] = true;

    for (int d = 0; d < 4; d++)
    {
        int ni = i + dr[d].first;
        int nj = j + dr[d].second;

        if (isValid(ni, nj) && !vis[ni][nj])
        {
            if (DFS(ni, nj))
                return true;
        }
    }

    return false;
}

int main()
{
    int a, b;
    cin >> M >> N;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 'A')
            {
                a = i;
                b = j;
            }
            if (ar[i][j] == 'B')
            {
                x = i;
                y = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if (DFS(a, b))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}