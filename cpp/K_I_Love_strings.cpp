#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        int ls=s.length(), lt=t.length();
        if(ls>=lt)
        {
            for (int i = 0; i <ls ; i++)
            {
                cout << s[0] << t[0];
            }
        }
        else {
            for (int i = 0; i < lt; i++)
            {
                cout << s[0] << t[0];
            }
        }

    }

    return 0;
}