#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int count=0;
        while(a--)
        {
            cin>>n;
            if(n>=b) count++;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}