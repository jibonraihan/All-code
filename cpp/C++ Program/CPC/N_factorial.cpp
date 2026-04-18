#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, fact=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact;
    return 0;
}