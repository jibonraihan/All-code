#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int m = 1;
    m = (m * a) % 100;
    m = (m * b) % 100;
    m = (m * c) % 100;
    m = (m * d) % 100;
    m=m % 100;

    cout<< setfill('0')<<setw(2)<<m<<endl;

    return 0;
}