#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int p = abs(arr[n - 1] - arr[0]);
        int q = abs(s - arr[0]);
        int r = abs(s - arr[n - 1]);
        int a = min(q, r);

        cout << p + a << endl;
    }

    return 0;
}