#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n+1;
    long long int x=pow(10,p);
    cout<<(x-9*n-10)/81;
    return 0;
}