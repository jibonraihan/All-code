#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(b<=1.07*a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
