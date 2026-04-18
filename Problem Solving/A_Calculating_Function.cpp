#include <bits/stdc++.h>
#include<gpmgmt.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long x=n/2;
    cout<<fixed<<setprecision(0);
    if(n%2==0)
    cout<<pow((-1),n)*x<<endl;
    else cout<<pow((-1),n)*(x+1)<<endl;

    return 0;
}