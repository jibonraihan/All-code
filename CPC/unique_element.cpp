#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int k = 0, ua[100];
    for (int i = 0; i < n; i++)
    {
        bool u = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && ar[i] == ar[j])
            {
                u = false;
                break;
            }
        }
        if (u)
        {
            ua[k] = ar[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
        cout << ua[i] << " ";

    return 0;
}