#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        int x=b/a;

        if (a == b)
            cout << 0 << endl;
        else if(b>x*a)
            cout << x << endl;
            else cout<<0<<endl;
    }
    return 0;
}