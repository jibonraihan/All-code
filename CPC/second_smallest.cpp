#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // for(int i=0; i<n; i++) cout<<ar[i]<<" ";

    bool b = false;
    int p = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > ar[0])
        {
            p = ar[i];
            b = true;
            break;
        }
    }
    if (b)
        cout << p;
    else
        cout << "None";

    return 0;
}