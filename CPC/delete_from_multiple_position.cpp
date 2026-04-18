#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int ar1[n];
    for(int i=0; i<n; i++) cin>>ar1[i];
    
    cin>>m;
    int ar2[m];
    for(int i=0; i<m; i++) cin>>ar2[i];

    for(int i=0; i<n; i++)
    {
        int idx=0;
        for(int j=0; j<m; j++)
        {
           if(i==ar2[j])
           {
               idx=1;
               break;
           }
        }
        if(idx==1) continue;
        cout<<ar1[i]<<" ";
    }
        
        
    return 0;
}