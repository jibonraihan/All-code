#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> pr = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
bool visited[105][105];
int distinct[105][105];

int N, M, k1_cell, k2_cell, q1_cell, q2_cell;
bool isValid(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < M;
}

int bfs(int x, int y)
{
    memset(visited, false, sizeof(visited));
    memset(distinct, -1, sizeof(distinct));

    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    distinct[x][y] = 0;

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        if (a == q1_cell && b == q2_cell)
            return distinct[a][b];

        for (auto move : pr)
        {
            int n1 = a + move.first;
            int n2 = b + move.second;

            if (isValid(n1, n2) && !visited[n1][n2])
            {
                visited[n1][n2] = true;
                distinct[n1][n2] = distinct[a][b] + 1;
                q.push({n1, n2});
            }
        }
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> N >> M >> k1_cell >> k2_cell >> q1_cell >> q2_cell;
        int ans = bfs(k1_cell, k2_cell);
        cout << ans << endl;
    }
    return 0;
}