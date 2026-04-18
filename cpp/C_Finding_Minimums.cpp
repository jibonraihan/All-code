#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a1[n];
    for (int i = 0; i < n; i++)
        cin >> a1[i];

        
    for (int i = 0; i < n; i++)
    {
        int a2[m];
        int x=m;
        for (int j = 0; j < x; j++)
        {
            a2[j] = a1[j];
        }
        i=m;
        m=m+m;
    }

    for (int i = 0; i < m; i++)
        cout << a2[i] << " ";
    return 0;
}