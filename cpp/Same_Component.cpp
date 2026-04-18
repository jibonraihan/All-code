#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> G;
vector<vector<bool>> V;

vector<pair<int, int>> pr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int N, M;
bool isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < N && y < M &&
           G[x][y] == '.' && !V[x][y];
}

bool DFS(int x, int y, int p, int q)
{
    if (x == p && y == q)
        return true;

    V[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int m = x + pr[i].first;
        int n = y + pr[i].second;

        if (isValid(m, n))
        {
            if (DFS(m, n, p, q))
                return true;
        }
    }

    return false;
}

int main()
{
    cin >> N >> M;

    G.resize(N, vector<char>(M));
    V.resize(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> G[i][j];

    int s1_index, s2_index, d1_index, d2_index;
    cin >> s1_index >> s2_index;
    cin >> d1_index >> d2_index;

    if (DFS(s1_index, s2_index, d1_index, d2_index))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}