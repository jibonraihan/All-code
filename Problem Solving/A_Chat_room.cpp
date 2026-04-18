#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string a="hello";

    int i, j=0;
    for(i=0; i<s.size() && j<a.size(); i++)
    {
        if(s[i]==a[j]) j++;
    }

    if(j==a.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}