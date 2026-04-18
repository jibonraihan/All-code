#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1;
    string a;
    cin >> a;
    for (int i = 0; i < a.length() - 1; i++)
    {
        if (a[i] == a[i + 1])
            count++;
        else
            count = 1;
        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}