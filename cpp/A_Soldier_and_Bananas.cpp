#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int s=(w*(w+1))/2;
    int m=s*k;

    if(m>n) cout<<m-n;
    else cout<<0;


    return 0;
}