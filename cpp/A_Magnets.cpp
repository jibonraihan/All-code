#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int i;
    for(i=0; i<n; i++) cin>>ar[i];

    int a=0, b=0;
    for(i=0; i<n; i++)
    {
        if(ar[i]==10 && ar[i+1]==10)
        {
            a++;
        if(ar[i+1]!=10) break;
        }
        else if(ar[i]==01 && ar[i+1]==01)
        {
            b++;
            if(ar[i+1]!=01) break;
        }
    }

    cout<<max(a,b)<<endl;
    return 0;
}