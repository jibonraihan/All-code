#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,one=0,cnt=0;
        cin>>n>>x;
        int ar[n];
        for(int i=0; i<n; i++) 
        {
            cin>>ar[i];
            if(ar[i]==1) one++;
        }

        for(int i=0; i<n; i++)
        {
            if(ar[i]==1)
            {
                for(int j=0; j<x; j++)
                {
                    if(ar[j]==1) 
                    cnt++;
                }
            }
            i=n;
        }

        if(cnt<one) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}