#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        vector<int>v(x);
        int i;
        for(i=0; i<x; i++) cin>>v[i];
        vector<int> w=v;
        sort(v.begin(), v.end());
        for(i=0; i<x; i++)
        {
            if(v[i]+w[i]<=v[i+1]+w[i+1])
            {
                continue;
            }
            else{
                int tmp=w[i];
                w[i]=w[i+1];
                w[i+1]=tmp;
            }
        }
        for(i=0; i<x; i++) cout<<w[i]<<" ";
        cout<<endl;
    }
    return 0;
}