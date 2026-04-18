#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i+=2)
    {
        if(s[i]>=s[i+2])
            s[0] = s[i + 2];
    }
    cout<<s<<endl;
    return 0;
}