#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n;

    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    if(x==rev) cout<<rev<<endl<<"YES"<<endl;
    else cout<<rev<<endl<<"NO"<<endl;
    return 0;
}