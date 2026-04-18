#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k, c0=0,c1=0;
        string s;
        cin>>n>>k>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') c0++;
            else c1++;
        }
        int tp = n / 2, sp = tp - k;
        if () cout << "YES" << endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}