#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;
    double p=1.0*k/a;
    double x = (n * p);
    long long q=x;

    if(x>q && x<floor(x))
    cout<<"double";
    return 0;
}