#include <bits/stdc++.h>
using namespace std;

long long ar[100];

int main()
{
    long long n,i;
    cin >> n;

    memset(ar, -1, sizeof(ar));
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 1;
    ar[3] = 2;
    for (i = 4; i <= n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3] + ar[i - 4];
    }

    cout << ar[n] << endl;

    return 0;
}