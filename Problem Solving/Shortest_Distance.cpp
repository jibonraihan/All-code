#include <bits/stdc++.h>
using namespace std;
long long arr[101][101];
int N, E;

void F_warshall()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                if (arr[j][i] != LLONG_MAX && arr[i][k] != LLONG_MAX)
                {
                    if ( arr[j][i] + arr[i][k] < arr[j][k])
                        arr[j][k] = arr[j][i] + arr[i][k];
                }
            }
        }
    }
}
int main()
{
    cin >> N >> E;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            if (i == j)
                arr[i][j] = 0;
            else
                arr[i][j] = LLONG_MAX;
        }
    }

    for (int i = 0; i < E; ++i)
    {
        int A, B, d;
        cin >> A >> B >> d;
        if (arr[A][B] > d)
            arr[A][B] = d;
    }
    F_warshall();
    int Q, X, Y;
    cin >> Q;
    while (Q--)
    {
        cin >> X >> Y;
        if (arr[X][Y] == LLONG_MAX)
            cout << "-1" << endl;
        else
            cout << arr[X][Y] << endl;
    }

    return 0;
}