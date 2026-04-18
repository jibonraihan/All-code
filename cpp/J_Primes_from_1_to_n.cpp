#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // if (n == 2)
    // {
    //     cout << n;
    //     return 0;
    // }
    for (int k = 2; k <= n; k++)
    {
        int flag = 1;
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
                flag = 0;
        }

        if (flag)
            cout << k << " ";
    }

    return 0;
}