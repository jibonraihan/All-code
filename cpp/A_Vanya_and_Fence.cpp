#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int ar[n], cnt=0;
    for(int i=0; i<n; i++) 
    {
        cin>>ar[i];
        if(ar[i]>h) cnt++;
    }

    cout<<(n-cnt)+(cnt*2)<<endl;
    return 0;
}