#include <bits/stdc++.h>
using namespace std;
vector<int> ar[1001];
int main()
{
    int N, E;
    cin >> N >> E;
    for (int i = 0; i < E; i++)
    {
        int x, y;
        cin >> x >> y;
        ar[x].push_back(y);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int A, B;
        bool flag = false;
        cin >> A >> B;
        for (int i : ar[A])
        {
            if (i == B)
            {
                flag = true;
            }
        }
        if (flag || A == B)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}