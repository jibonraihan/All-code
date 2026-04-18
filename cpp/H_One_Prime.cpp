#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    int flag=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) flag=0;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}