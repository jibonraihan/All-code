#include <bits/stdc++.h>
using namespace std;

vector<string> maze;
vector<pair<int, int>> pr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int N, M;
bool isValid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M && (maze[x][y] == '.' || maze[x][y] == 'D'));
}

bool BFS(pair<int, int> start, pair<int, int> destination, map<pair<int, int>, pair<int, int>> &parent)
{
    queue<pair<int, int>> Q;
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    Q.push(start);
    visited[start.first][start.second] = true;

    while (!Q.empty())
    {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        if (x == destination.first && y == destination.second)
        {
            return true;
        }

        for (int k = 0; k < 4; k++)
        {
            int p = x + pr[k].first;
            int q = y + pr[k].second;
            if (isValid(p, q) && !visited[p][q])
            {
                visited[p][q] = true;
                parent[{p, q}] = {x, y};
                Q.push({p, q});
            }
        }
    }
    return false;
}

void mark(pair<int, int> start, pair<int, int> destination, map<pair<int, int>, pair<int, int>> &parent)
{
    pair<int, int> cur = destination;
    while (cur != start)
    {
        if (maze[cur.first][cur.second] == '.')
        {
            maze[cur.first][cur.second] = 'X';
        }
        cur = parent[cur];
    }
}

void print_it()
{
    for (int i = 0; i < N; i++)
        cout << maze[i] << "\n";
}

int main()
{
    cin >> N >> M;
    maze.resize(N);

    pair<int, int> start, d;
    for (int i = 0; i < N; i++)
    {
        cin >> maze[i];
        for (int j = 0; j < M; j++)
        {
            if (maze[i][j] == 'R')
                start = {i, j};
            if (maze[i][j] == 'D')
                d = {i, j};
        }
    }

    map<pair<int, int>, pair<int, int>> parent;
    if (BFS(start, d, parent))
    {
        mark(start, d, parent);
        print_it();
    }
    else
        print_it();

    return 0;
}