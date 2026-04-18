#include <bits/stdc++.h>
using namespace std;

int N, M;
char ar[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    return (i >= 0 && i < N && j >= 0 && j < M && ar[i][j] == '.' && !vis[i][j]);
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = i + pr[dir].first;
        int ny = j + pr[dir].second;
        if (isValid(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> ar[i];

    int apartment = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (ar[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                apartment++;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    cout << apartment;
    return 0;
}