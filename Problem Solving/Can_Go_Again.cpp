#include <bits/stdc++.h>
using namespace std;

long long cost[1001];
vector<pair<int, pair<int, int>>> V;
int N, E;
int flag = 0;

void B_ford(int source)
{
    cost[source] = 0;
    for (int l = 1; l <= N - 1; l++)
    {
        for (int i = 0; i < E; i++)
        {
            int a = V[i].first;
            int b = V[i].second.first;
            int c = V[i].second.second;
            if (cost[a] != LLONG_MAX && cost[a] + c < cost[b])
            {
                cost[b] = cost[a] + c;
            }
        }
    }
    for (int j = 0; j < E; j++)
    {
        int a = V[j].first;
        int b = V[j].second.first;
        int c = V[j].second.second;
        if (cost[a] != LLONG_MAX && cost[a] + c < cost[b])
        {
            flag = 1;
            cout << "Negative Cycle Detected" << endl;
            break;
        }
    }
}

int main()
{
    cin >> N >> E;
    for (int j = 0; j < E; j++)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        V.push_back({a, {b, c}});
    }
    for (int k = 1; k <= N; k++)
    {
        cost[k] = LLONG_MAX;
    }
    long long s, t;
    cin >> s >> t;
    B_ford(s);

    if (!flag)
    {
        while (t--)
        {
            int d;
            cin >> d;
            if (cost[d] == LLONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << cost[d] << endl;
        }
    }
    return 0;
}