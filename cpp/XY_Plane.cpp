#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if ((a > 0.0 || a < 0.0) && b == 0.0)
        {
            cout << "X-AXIS\n";
        }
        else if ((b > 0.0 || b < 0.0) && a == 0.0)
        {
            cout << "Y-AXIS\n";
        }
        else if (a==0.0 && b==0.0)
        {
            cout<<"ORIGIN\n";
        }
        else if (a < 0 && b > 0)
        {
            cout << "2ND QUADRANT\n";
        }
        else if (a < 0 && b < 0)
        {
            cout << "3RD QUADRANT\n";
        }
        else if (a > 0 && b > 0)
        {
            cout << "1ST QUADRANT\n";
        }
        else if (a > 0 && b < 0)
        {
            cout << "4TH QUADRANT\n";
        }
    }
    return 0;
}