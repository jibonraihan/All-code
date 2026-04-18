#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int smallest_pair = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sum = v[i] + v[j] + j - i;
                if (sum < smallest_pair)
                    smallest_pair = sum;
            }
        }
        cout << smallest_pair << endl;
    }
    return 0;
}

