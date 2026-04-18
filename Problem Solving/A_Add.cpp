#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = fun(a, b);
    cout << sum;
    return 0;
}