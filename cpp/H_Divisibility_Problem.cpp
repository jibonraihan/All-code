#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b,m;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        m=a%b;
        if(m==0) cout<<0<<endl;
        else cout<<b-m<<endl;
    }
    return 0;
}