#include <bits/stdc++.h>
using namespace std;

int ar[100];
int tet(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;
    if (ar[n] != -1)
        return ar[n];

    ar[n] = tet(n - 1) + tet(n - 2) + tet(n - 3) + tet(n - 4);
    return ar[n];
}

int main()
{
    int n;
    cin >> n;
    memset(ar, -1, sizeof(ar));
    cout << tet(n) << endl;

    return 0;
}