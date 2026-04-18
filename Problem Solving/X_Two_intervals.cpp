#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int m=max(a,c);
    int n=min(b,d);

    if(m>n) cout<<"-1"<<endl;
    else cout<<m<<" "<<n<<endl;

    return 0;
}