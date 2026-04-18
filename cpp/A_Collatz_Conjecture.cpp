#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        while (k--)
        {
            if (x % 2 == 0)
            {
                x *= 2;
            }
            else
            {
                if ((x - 1) / 3 % 3 == 0)
                {
                    x = x * 3 + 1;
                }
                else
                {
                    x *= 2;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}