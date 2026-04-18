#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++) cin>>v[i];

    //sort(v, v+n);
    int number;
    cin>>number;
    int flag=0, index=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==number)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1) cout<<index;
    else cout<<-1;
    return 0;
}