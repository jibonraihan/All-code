#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        x = n % 10;
        sum += x;
       while(n>=10)
       {
        n/=10;
       }
       sum+=n;
        cout << sum << endl;
        if(n<10) sum=0;
    }
}
