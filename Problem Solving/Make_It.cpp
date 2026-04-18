#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        while (n > 1)
        {
            if (n % 2 != 0 && n>=1)
            {
                n = n - 3;
            }
            n /= 2;
        }

        if (n == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}