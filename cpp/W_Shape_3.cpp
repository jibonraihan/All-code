#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int k = i - 1; k > 0; k--)
            cout << " ";
        for (int j = i * 2 - 1; j < 2 * n; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 1; i<= n; i++)
    {
        for (int k = i - 1; k > 0; k--)
            cout << " ";
        for (int j = i * 2 - 1; j < 2 * n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}