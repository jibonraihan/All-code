#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (x == vec[mid])
            {
                flag = 1;
                break;
            }
            if (x < vec[mid])
            {
                r = mid - 1;
            }
            if (x > vec[mid])
            {
                l = mid + 1;
            }
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}