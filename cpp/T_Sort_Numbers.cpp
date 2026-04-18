#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3], a[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
        a[i] = ar[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << ar[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}