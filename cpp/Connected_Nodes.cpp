#include <bits/stdc++.h>
using namespace std;
vector<int> ar[1001];
int main()
{
    int N, E, Q;
    cin >> N >> E;
    for (int i = 0; i < E; i++)
    {
        int x, y;
        cin >> x >> y;
        ar[x].push_back(y);
        ar[y].push_back(x);
    }

    for (int i = 0; i < N; i++)
    {
        sort(ar[i].begin(), ar[i].end(), greater<int>());
    }
    cin >> Q;
    while (Q--)
    {
        int x;
        cin >> x;
        if (ar[x].empty())
            cout << -1;
        else
        {
            for (int i : ar[x])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}