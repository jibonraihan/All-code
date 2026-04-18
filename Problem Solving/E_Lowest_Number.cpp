#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int low = ar[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                if (ar[i] < low)
                {
                    low = ar[i];
                    index = i;
                }
            }
        }
    }

    cout << low << " " << index+1;
    return 0;
}