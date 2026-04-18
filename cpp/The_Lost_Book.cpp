#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, target, idx = 0;
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++)
        cin >> ar[i];
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == target)
        {
            idx = i;
            break;
        }
    }
    if (idx != 0)
        cout << idx << endl;
    else
        cout << -1 << endl;
    return 0;
}