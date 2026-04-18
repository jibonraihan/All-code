#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long int> vec(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> vec[i];

    vector<long long int> pre_sum(N + 1);
    pre_sum[1] = vec[1];
    for (int i = 2; i <= N; i++)
    {
        pre_sum[i] = vec[i] + pre_sum[i - 1];
    }
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << pre_sum[r] << endl;
        else
        {
            cout << pre_sum[r] - pre_sum[l - 1] << endl;
        }
    }
    return 0;
}