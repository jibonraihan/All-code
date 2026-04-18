#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int a=s.length();
        if(a>10) cout<<s[0]<<a-2<<s[a-1]<<endl;
        else cout<<s<<endl;
    }
    return 0;
}