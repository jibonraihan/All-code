#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int x, found = 0;
    cin >> x;

    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == x)
        {
            found = 1;
            break;
        }
        else if (x > v[mid])
        {
            l = mid + 1;
        }
        else if (x < v[mid])
        {
            r = mid - 1;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}