#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long int tl = (n + a - 1) / a;
    long long int tw = (m + a - 1) / a;

    cout << tl * tw;

    return 0;
}