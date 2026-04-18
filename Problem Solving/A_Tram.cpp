#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x = 0, z = 0;
    int ax, bx;
    cin >> ax >> bx;
    x = bx - ax;
    for (int i = 1; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (x > z)
        z = x;
        x = x - a + b;
    }

    cout << z << endl;
    return 0;
}