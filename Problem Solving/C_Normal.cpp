#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        if (a % 4 == 0)
            cout << a << endl;
        else
            cout << a - 1 << endl;
    }
    return 0;
}