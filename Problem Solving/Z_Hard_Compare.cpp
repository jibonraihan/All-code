#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;

    long double d1= b*log(a), d2=d*log(c);

    if(d1>d2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}