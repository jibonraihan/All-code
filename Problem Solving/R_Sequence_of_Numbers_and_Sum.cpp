#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a, b;
        cin >> a >> b;
        int mx = max(a, b);
        int mn = min(a, b);
        int sum = 0;
        if (a <= 0 || b <= 0)
            return 0;
        else
        {
            for (int i = mn; i <= mx; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }

    return 0;
}