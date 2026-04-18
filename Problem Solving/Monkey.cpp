#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        string s2;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z') s2+=s[i];
        }

        sort(s2.begin(), s2.end());
        cout<<s2<<endl;
    }            
    
    return 0;
}