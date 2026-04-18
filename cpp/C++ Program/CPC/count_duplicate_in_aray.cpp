#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

        bool c[n] = {false};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                if (!c[ar[i]])
                {
                    count++;
                    c[ar[i]] = true;
                }
            }
        }
    }
    cout << count;

    return 0;
}