#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];

    int idx;
    cin>>idx;

    for(int i=0; i<n; i++)
    {
        if(i==idx) continue;
        cout<<ar[i]<<" ";
    }

    return 0;
}